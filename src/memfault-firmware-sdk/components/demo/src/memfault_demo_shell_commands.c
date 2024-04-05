//! @file
//!
//! Copyright (c) Memfault, Inc.
//! See License.txt for details
//!
//! @brief
//! Command definitions for the minimal shell/console implementation.

#include <stddef.h>
#include <string.h>

#include "memfault-firmware-sdk/components/include/memfault/core/compiler.h"
#include "memfault-firmware-sdk/components/include/memfault/core/data_export.h"
#include "memfault-firmware-sdk/components/include/memfault/core/debug_log.h"
#include "memfault-firmware-sdk/components/include/memfault/core/math.h"
#include "memfault-firmware-sdk/components/include/memfault/core/self_test.h"
#include "memfault-firmware-sdk/components/include/memfault/demo/cli.h"
#include "memfault-firmware-sdk/components/include/memfault/demo/shell_commands.h"
#include "memfault-firmware-sdk/components/include/memfault/metrics/metrics.h"

static int prv_panics_component_required(void) {
  MEMFAULT_LOG_RAW("Disabled. panics component integration required");
  return -1;
}

MEMFAULT_WEAK int memfault_demo_cli_cmd_get_core(MEMFAULT_UNUSED int argc,
                                                 MEMFAULT_UNUSED char *argv[]) {
  return prv_panics_component_required();
}

MEMFAULT_WEAK int memfault_demo_cli_cmd_clear_core(MEMFAULT_UNUSED int argc,
                                                   MEMFAULT_UNUSED char *argv[]) {
  return prv_panics_component_required();
}

MEMFAULT_WEAK int memfault_demo_cli_cmd_crash(MEMFAULT_UNUSED int argc,
                                              MEMFAULT_UNUSED char *argv[]) {
  return prv_panics_component_required();
}

int memfault_demo_cli_cmd_export(MEMFAULT_UNUSED int argc, MEMFAULT_UNUSED char *argv[]) {
  memfault_data_export_dump_chunks();

  return 0;
}

// Provide weak implementations in the case where the metrics component is not enabled
MEMFAULT_WEAK void memfault_metrics_heartbeat_debug_print(void) {
  MEMFAULT_LOG_RAW("Disabled. metrics component integration required");
}

MEMFAULT_WEAK void memfault_metrics_heartbeat_debug_trigger(void) {
  MEMFAULT_LOG_RAW("Disabled. metrics component integration required");
}

MEMFAULT_WEAK void memfault_metrics_all_sessions_debug_print(void) {
  MEMFAULT_LOG_RAW("Disabled. metrics component integration required");
}

static int memfault_demo_cli_cmd_metrics_dump(int argc, char *argv[]) {
  if (argc < 2) {
    MEMFAULT_LOG_RAW("Enter 'heartbeat' or 'sessions'");
    return 0;
  }

  if (!strncmp(argv[1], "sessions", sizeof("sessions"))) {
    memfault_metrics_all_sessions_debug_print();
  } else if (!strncmp(argv[1], "heartbeat", sizeof("heartbeat"))) {
    memfault_metrics_heartbeat_debug_print();
  } else {
    MEMFAULT_LOG_RAW("Unknown option. Enter 'heartbeat' or 'sessions'");
    return 0;
  }

  return 0;
}

int memfault_demo_cli_cmd_heartbeat(MEMFAULT_UNUSED int argc, MEMFAULT_UNUSED char *argv[]) {
  memfault_metrics_heartbeat_debug_trigger();
  return 0;
}

#if MEMFAULT_DEMO_CLI_SELF_TEST
int memfault_demo_cli_cmd_self_test(int argc, char *argv[]) {
  uint32_t run_flags = kMemfaultSelfTestFlag_Default;
  // If we got an arg, translate to a test flag
  if (argc >= 2) {
    run_flags = memfault_self_test_arg_to_flag(argv[1]);
  }

  return memfault_self_test_run(run_flags);
}
#endif

static const sMemfaultShellCommand s_memfault_shell_commands[] = {
  { "clear_core", memfault_demo_cli_cmd_clear_core, "Clear an existing coredump" },
  { "drain_chunks", memfault_demo_drain_chunk_data,
    "Flushes queued Memfault data. To upload data see https://mflt.io/posting-chunks-with-gdb" },
  { "export", memfault_demo_cli_cmd_export,
    "Export base64-encoded chunks. To upload data see https://mflt.io/chunk-data-export" },
  { "get_core", memfault_demo_cli_cmd_get_core, "Get coredump info" },
  { "get_device_info", memfault_demo_cli_cmd_get_device_info, "Get device info" },
  { "coredump_size", memfault_demo_cli_cmd_coredump_size, "Print the coredump storage capacity" },
  { "heartbeat", memfault_demo_cli_cmd_heartbeat, "Trigger a heartbeat" },
  { "metrics_dump", memfault_demo_cli_cmd_metrics_dump,
    "Dump current heartbeat or session metrics" },
  //
  // Test commands for validating SDK functionality: https://mflt.io/mcu-test-commands
  //

  { "test_assert", memfault_demo_cli_cmd_assert, "Trigger memfault assert" },
  { "test_cassert", memfault_demo_cli_cmd_cassert, "Trigger C assert" },

#if MEMFAULT_COMPILER_ARM_CORTEX_M
  { "test_busfault", memfault_demo_cli_cmd_busfault, "Trigger a busfault" },
  { "test_hardfault", memfault_demo_cli_cmd_hardfault, "Trigger a hardfault" },
  { "test_memmanage", memfault_demo_cli_cmd_memmanage, "Trigger a memory management fault" },
  { "test_usagefault", memfault_demo_cli_cmd_usagefault, "Trigger a usage fault" },
#endif

#if MEMFAULT_COMPILER_ARM_V7_A_R
  { "test_dataabort", memfault_demo_cli_cmd_dataabort, "Trigger a data abort" },
  { "test_prefetchabort", memfault_demo_cli_cmd_prefetchabort, "Trigger a prefetch abort" },
#endif

  { "test_log", memfault_demo_cli_cmd_test_log, "Writes test logs to log buffer" },
  { "test_log_capture", memfault_demo_cli_cmd_trigger_logs,
    "Trigger capture of current log buffer contents" },
  { "test_reboot", memfault_demo_cli_cmd_system_reboot,
    "Force system reset and track it with a trace event" },
  { "test_trace", memfault_demo_cli_cmd_trace_event_capture, "Capture an example trace event" },

#if MEMFAULT_DEMO_CLI_SELF_TEST
  { "self_test", memfault_demo_cli_cmd_self_test,
    "Run a self test to check integration with the SDK" },
#endif

  { "help", memfault_shell_help_handler, "Lists all commands" },
};

// Note: Declared as weak so an end user can override the command table
MEMFAULT_WEAK const sMemfaultShellCommand *const g_memfault_shell_commands =
  s_memfault_shell_commands;
MEMFAULT_WEAK const size_t g_memfault_num_shell_commands =
  MEMFAULT_ARRAY_SIZE(s_memfault_shell_commands);
