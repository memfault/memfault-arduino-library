#pragma once

//! @file
//!
//! Copyright (c) Memfault, Inc.
//! See License.txt for details
//!
//! @brief
//! A subsystem which can (optionally) be used to trace _all_ reboots taking place on the system
//!
//! The Memfault "panics" component will automatically save coredumps anytime the system crashes.
//! However, it can sometimes be useful to track other types of reset reasons such as a software
//! initiated reset to complete an OTA, a brown out reset, a hardware watchdog reset, etc
//!
//! To track these types of resets, the "panics" SDK component also exposes a lightweight "reboot
//! tracking" module.  More details can be found in the function descriptions below or a
//! step-by-step setup tutorial is available at https://mflt.io/2QlOlgH
//!
//! A user may also (optionally) use two APIs for catching & reacting to reboot loops:
//!  memfault_reboot_tracking_reset_crash_count()
//!  memfault_reboot_tracking_get_crash_count()

#include <inttypes.h>
#include <stddef.h>

#include "memfault-firmware-sdk/components/include/memfault/core/compiler.h"
#include "memfault-firmware-sdk/components/include/memfault/core/event_storage.h"
#include "memfault-firmware-sdk/components/include/memfault/core/reboot_reason_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//! Additional information that can optionally be collected at bootup and appended to the current
//! reset information
typedef struct BootupInfo {
  //! Most MCUs have an always-on register that will report why the device rebooted (i.e normal
  //! reset, brown out reset, watchdog, etc). This value can be provided here to attach the current
  //! value of the register to the reboot information or be 0 otherwise
  uint32_t reset_reason_reg;

  //! If the reason for the current reboot is not already tracked, this value will be used.
  //!
  //! @note This can useful in situations where no code executes from the main application prior to
  //! reboot (for example, a reset button is pressed or another MCU pulls power to the rail) but
  //! info is made available to the application after bootup as to why it was reset (i.e bootloader
  //! passes additional state about reset to main app).
  //!
  //! @note If there is not additional info available about the reset, this should be set to 0
  //! (kMfltRebootReason_Unknown).
  eMemfaultRebootReason reset_reason;
} sResetBootupInfo;

//! Helper structure for storing/retrieving the device's reboot reason
typedef struct MfltRebootType {
  //! Stores the reboot reason determined from hardware during the current boot
  eMemfaultRebootReason reboot_reg_reason;
  //! Stores the reboot reason as read from s_mflt_reboot_info. This could be set in
  //! the prior boot from either:
  //! * the application using memfault_reboot_tracking_mark_reset_imminent (fault handler, firmware
  //! update, etc)
  //! * a reason determined from the reboot register at bootup
  eMemfaultRebootReason prior_stored_reason;
} sMfltRebootReason;

//! Value used to determine state of reboot tracking data
#define MEMFAULT_REBOOT_REASON_NOT_SET 0xffffffff

#define MEMFAULT_REBOOT_TRACKING_REGION_SIZE 64

//! Sets the memory region used for reboot tracking.
//!
//! @note This region should _not_ initialized by your bootloader or application.
//!
//!    To achieve this behavior, some compilers have NOINIT directives or with GCC LD
//!    this behavior can be easily achieved with something like:
//!
//!    // In a C File
//!    #include "memfault-firmware-sdk/components/include/memfault/core/compiler.h"
//!    MEMFAULT_PUT_IN_SECTION(".mflt_reboot_info")
//!    static uint8_t s_reboot_tracking[MEMFAULT_REBOOT_TRACKING_REGION_SIZE];
//!
//!    // In device LD file
//!    NOINIT (rw) :  ORIGIN = <addr>, LENGTH = 0x20
//!    .noinit (NOLOAD): { KEEP(*(*.mflt_reboot_info)) } > NOINIT
//!
//! @note The size of the region should be MEMFAULT_REBOOT_TRACKING_REGION_SIZE
//! @note This should be called once on bootup of the system prior to making any other
//!   reboot_tracking calls
//! @param start_addr The location where reboot tracking is located
//! @param bootup_info See struct for more details. Can be NULL if there is no info
//!  to provide
void memfault_reboot_tracking_boot(void *start_addr, const sResetBootupInfo *bootup_info);

typedef struct MfltRebootTrackingRegInfo {
  uint32_t pc;
  uint32_t lr;
} sMfltRebootTrackingRegInfo;

//! Flag that a reboot is about to take place
//!
//! This is automatically called by the Memfault API for fault handlers and when
//! memfault_fault_handling_assert() is invoked
//!
//! It can also be called for happy-path reboots such as a reboot due to a user clicking
//! a button or a reboot due to an OTA update taking place. It's up to the user of the SDK
//! to call the API in these scenarios
//! @param reboot_reason The reason for the reboot. See eMemfaultRebootReason for options
//! @param reg Register state at the time the reboot was initiated or NULL if no state is available
void memfault_reboot_tracking_mark_reset_imminent(eMemfaultRebootReason reboot_reason,
                                                  const sMfltRebootTrackingRegInfo *reg);

//! Helper macro to capture the current pc & lr and call
//! memfault_reboot_tracking_mark_reset_imminent
#define MEMFAULT_REBOOT_MARK_RESET_IMMINENT(reason_)                       \
  do {                                                                     \
    void *mflt_pc;                                                         \
    MEMFAULT_GET_PC(mflt_pc);                                              \
    void *mflt_lr;                                                         \
    MEMFAULT_GET_LR(mflt_lr);                                              \
    sMfltRebootTrackingRegInfo mflt_reg_info = {                           \
      .pc = (uint32_t)(uintptr_t)mflt_pc,                                  \
      .lr = (uint32_t)(uintptr_t)mflt_lr,                                  \
    };                                                                     \
    memfault_reboot_tracking_mark_reset_imminent(reason_, &mflt_reg_info); \
  } while (0)

//! Helper macro that behaves the same as `MEMFAULT_REBOOT_MARK_RESET_IMMINENT` but allows
//! for a custom reboot reason to be specified without needed to use the
//! `MEMFAULT_REBOOT_REASON_KEY` macro
#define MEMFAULT_REBOOT_MARK_RESET_IMMINENT_CUSTOM(reason_) \
  MEMFAULT_REBOOT_MARK_RESET_IMMINENT(MEMFAULT_REBOOT_REASON_KEY(reason_))

//! Collects recent reset info and pushes it to memfault_event_storage so that the data can
//! can be sent out using the Memfault data packetizer
//!
//! @param storage_impl The event storage implementation being used (returned from
//!   memfault_events_storage_boot())
//! @return 0 on success or if there was nothing to collect, error code otherwise
int memfault_reboot_tracking_collect_reset_info(const sMemfaultEventStorageImpl *storage_impl);

//! Compute the worst case number of bytes required to serialize Memfault data
//!
//! @return the worst case amount of space needed to serialize an event
size_t memfault_reboot_tracking_compute_worst_case_storage_size(void);

//! Get the current crash count
//!
//! Every time the device resets due to a Reason of Unknown or Error, the crash count
//! is incremented.  A user of the SDK may (optionally) use this information to determine
//! if the device is crash looping and if so take recovery action.
//!
//! @return crash count
size_t memfault_reboot_tracking_get_crash_count(void);

//! Reset the crash count to 0
void memfault_reboot_tracking_reset_crash_count(void);

//! Flags that a coredump has been collected as part of this reboot
//!
//! @note This is called by the "panics" component coredump integration automatically and should
//! never need to be called by an end user directly
void memfault_reboot_tracking_mark_coredump_saved(void);

//! Get the reported reboot reason from boot
//!
//! Each time the device boots, the reboot reason mapped from the platform reboot register is
//! stored. This can be used either by other subsystems or users of the SDK.
//!
//! @param reboot_reason Pointer to store the reboot reason from boot
//! @return 0 on success or 1 if the reboot reason is invalid
//! or the input parameter is NULL

int memfault_reboot_tracking_get_reboot_reason(sMfltRebootReason *reboot_reason);

//! Returns a boolean representing whether an unexpected reboot occurred from boot
//!
//! This function uses a reboot reason from a reboot register and the prior reboot reason (if
//! present) to determine if a reboot was unexpected.
//!
//! @param unexpected_reboot_occurred Pointer to store boolean marking an unexpected reboot
//! @return 0 on success, or 1 if the result is invalid or the input parameter is NULL
int memfault_reboot_tracking_get_unexpected_reboot_occurred(bool *unexpected_reboot_occurred);

//! Checks if reboot tracking component has booted
//!
//! @returns true if reboot tracking component booted or false if not
bool memfault_reboot_tracking_booted(void);

#if MEMFAULT_REBOOT_REASON_CUSTOM_ENABLE == 1
  //! Defines a customer specific reboot reason.
  //!
  //! These allow for custom reboot reasons to be defined which can be used to track
  //! the root cause of a reboot that is not captured by the default set of reboot reasons.
  //!
  //! There are two types of reboot reasons:
  //! 1. Expected: These are reboots which are expected to happen as part of normal operation.
  //!    For example, a user initiated reboot. These can be specified using
  //!    MEMFAULT_EXPECTED_REBOOT_REASON_DEFINE.
  //! 2. Unexpected: These are reboots which are not expected to happen as part of normal operation.
  //!    For example, a watchdog reset, or overcurrent event. These can be specified using
  //!    MEMFAULT_UNEXPECTED_REBOOT_REASON_DEFINE.
  #define MEMFAULT_EXPECTED_REBOOT_REASON_DEFINE(_name) MEMFAULT_REBOOT_REASON_DEFINE_TRAP_()
  #define MEMFAULT_UNEXPECTED_REBOOT_REASON_DEFINE(_name) MEMFAULT_REBOOT_REASON_DEFINE_TRAP_()

  //! Stub define to detect accidental usage outside of the user reboot reason file
  #define MEMFAULT_REBOOT_REASON_DEFINE_TRAP_()                                                 \
    MEMFAULT_STATIC_ASSERT(false, "MEMFAULT_EXPECTED_REBOOT_REASON_DEFINE should only be used " \
                                  "in " MEMFAULT_METRICS_USER_HEARTBEAT_DEFS_FILE);
#endif

//! Convenience macro to use a custom reboot reason key
//!
//! This macro is used to convert a custom reboot reason name to a key that can be used to
//! track the reboot reason since
//! @param name The name of the custom reboot reason
#define MEMFAULT_REBOOT_REASON_KEY(name) kMfltRebootReason_##name

#ifdef __cplusplus
}
#endif
