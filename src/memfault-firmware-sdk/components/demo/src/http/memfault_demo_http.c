//! @file
//!
//! Copyright (c) Memfault, Inc.
//! See License.txt for details
//!
//! @brief
//! CLI commands which require integration of the "http" component.

#include "memfault-firmware-sdk/components/include/memfault/core/compiler.h"
#include "memfault-firmware-sdk/components/include/memfault/core/debug_log.h"
#include "memfault-firmware-sdk/components/include/memfault/core/errors.h"
#include "memfault-firmware-sdk/components/include/memfault/demo/cli.h"
#include "memfault-firmware-sdk/components/include/memfault/demo/util.h"
#include "memfault-firmware-sdk/components/include/memfault/http/http_client.h"

const char *memfault_demo_get_chunks_url(void) {
  static char s_chunks_url[MEMFAULT_HTTP_URL_BUFFER_SIZE];
  memfault_http_build_url(s_chunks_url, MEMFAULT_HTTP_CHUNKS_API_SUBPATH);
  return s_chunks_url;
}

const char *memfault_demo_get_api_project_key(void) {
  return g_mflt_http_client_config.api_key;
}

int memfault_demo_cli_cmd_post_core(MEMFAULT_UNUSED int argc, MEMFAULT_UNUSED char *argv[]) {
  MEMFAULT_LOG_INFO("Posting Memfault Data...");
  return memfault_http_client_post_chunk();
}
