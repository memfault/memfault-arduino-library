//! @file
//!
//! Copyright (c) Memfault, Inc.
//! See License.txt for details
//!
//! @brief
//! Representation of Root Certs Memfault uses in DER format

#include <stdint.h>

#include "memfault-firmware-sdk/components/include/memfault/http/root_certs.h"

const uint8_t g_memfault_cert_digicert_global_root_ca[] = {
  0x30, 0x82, 0x03, 0xaf, 0x30, 0x82, 0x02, 0x97, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x08,
  0x3b, 0xe0, 0x56, 0x90, 0x42, 0x46, 0xb1, 0xa1, 0x75, 0x6a, 0xc9, 0x59, 0x91, 0xc7, 0x4a, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x05, 0x05, 0x00, 0x30, 0x61,
  0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x15, 0x30,
  0x13, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0c, 0x44, 0x69, 0x67, 0x69, 0x43, 0x65, 0x72, 0x74,
  0x20, 0x49, 0x6e, 0x63, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x10, 0x77,
  0x77, 0x77, 0x2e, 0x64, 0x69, 0x67, 0x69, 0x63, 0x65, 0x72, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x31,
  0x20, 0x30, 0x1e, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x17, 0x44, 0x69, 0x67, 0x69, 0x43, 0x65,
  0x72, 0x74, 0x20, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43,
  0x41, 0x30, 0x1e, 0x17, 0x0d, 0x30, 0x36, 0x31, 0x31, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
  0x30, 0x5a, 0x17, 0x0d, 0x33, 0x31, 0x31, 0x31, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
  0x5a, 0x30, 0x61, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53,
  0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0c, 0x44, 0x69, 0x67, 0x69, 0x43,
  0x65, 0x72, 0x74, 0x20, 0x49, 0x6e, 0x63, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x0b,
  0x13, 0x10, 0x77, 0x77, 0x77, 0x2e, 0x64, 0x69, 0x67, 0x69, 0x63, 0x65, 0x72, 0x74, 0x2e, 0x63,
  0x6f, 0x6d, 0x31, 0x20, 0x30, 0x1e, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x17, 0x44, 0x69, 0x67,
  0x69, 0x43, 0x65, 0x72, 0x74, 0x20, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x52, 0x6f, 0x6f,
  0x74, 0x20, 0x43, 0x41, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a,
  0x02, 0x82, 0x01, 0x01, 0x00, 0xe2, 0x3b, 0xe1, 0x11, 0x72, 0xde, 0xa8, 0xa4, 0xd3, 0xa3, 0x57,
  0xaa, 0x50, 0xa2, 0x8f, 0x0b, 0x77, 0x90, 0xc9, 0xa2, 0xa5, 0xee, 0x12, 0xce, 0x96, 0x5b, 0x01,
  0x09, 0x20, 0xcc, 0x01, 0x93, 0xa7, 0x4e, 0x30, 0xb7, 0x53, 0xf7, 0x43, 0xc4, 0x69, 0x00, 0x57,
  0x9d, 0xe2, 0x8d, 0x22, 0xdd, 0x87, 0x06, 0x40, 0x00, 0x81, 0x09, 0xce, 0xce, 0x1b, 0x83, 0xbf,
  0xdf, 0xcd, 0x3b, 0x71, 0x46, 0xe2, 0xd6, 0x66, 0xc7, 0x05, 0xb3, 0x76, 0x27, 0x16, 0x8f, 0x7b,
  0x9e, 0x1e, 0x95, 0x7d, 0xee, 0xb7, 0x48, 0xa3, 0x08, 0xda, 0xd6, 0xaf, 0x7a, 0x0c, 0x39, 0x06,
  0x65, 0x7f, 0x4a, 0x5d, 0x1f, 0xbc, 0x17, 0xf8, 0xab, 0xbe, 0xee, 0x28, 0xd7, 0x74, 0x7f, 0x7a,
  0x78, 0x99, 0x59, 0x85, 0x68, 0x6e, 0x5c, 0x23, 0x32, 0x4b, 0xbf, 0x4e, 0xc0, 0xe8, 0x5a, 0x6d,
  0xe3, 0x70, 0xbf, 0x77, 0x10, 0xbf, 0xfc, 0x01, 0xf6, 0x85, 0xd9, 0xa8, 0x44, 0x10, 0x58, 0x32,
  0xa9, 0x75, 0x18, 0xd5, 0xd1, 0xa2, 0xbe, 0x47, 0xe2, 0x27, 0x6a, 0xf4, 0x9a, 0x33, 0xf8, 0x49,
  0x08, 0x60, 0x8b, 0xd4, 0x5f, 0xb4, 0x3a, 0x84, 0xbf, 0xa1, 0xaa, 0x4a, 0x4c, 0x7d, 0x3e, 0xcf,
  0x4f, 0x5f, 0x6c, 0x76, 0x5e, 0xa0, 0x4b, 0x37, 0x91, 0x9e, 0xdc, 0x22, 0xe6, 0x6d, 0xce, 0x14,
  0x1a, 0x8e, 0x6a, 0xcb, 0xfe, 0xcd, 0xb3, 0x14, 0x64, 0x17, 0xc7, 0x5b, 0x29, 0x9e, 0x32, 0xbf,
  0xf2, 0xee, 0xfa, 0xd3, 0x0b, 0x42, 0xd4, 0xab, 0xb7, 0x41, 0x32, 0xda, 0x0c, 0xd4, 0xef, 0xf8,
  0x81, 0xd5, 0xbb, 0x8d, 0x58, 0x3f, 0xb5, 0x1b, 0xe8, 0x49, 0x28, 0xa2, 0x70, 0xda, 0x31, 0x04,
  0xdd, 0xf7, 0xb2, 0x16, 0xf2, 0x4c, 0x0a, 0x4e, 0x07, 0xa8, 0xed, 0x4a, 0x3d, 0x5e, 0xb5, 0x7f,
  0xa3, 0x90, 0xc3, 0xaf, 0x27, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x63, 0x30, 0x61, 0x30, 0x0e,
  0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02, 0x01, 0x86, 0x30, 0x0f,
  0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30,
  0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x03, 0xde, 0x50, 0x35, 0x56, 0xd1,
  0x4c, 0xbb, 0x66, 0xf0, 0xa3, 0xe2, 0x1b, 0x1b, 0xc3, 0x97, 0xb2, 0x3d, 0xd1, 0x55, 0x30, 0x1f,
  0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x03, 0xde, 0x50, 0x35, 0x56,
  0xd1, 0x4c, 0xbb, 0x66, 0xf0, 0xa3, 0xe2, 0x1b, 0x1b, 0xc3, 0x97, 0xb2, 0x3d, 0xd1, 0x55, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03, 0x82,
  0x01, 0x01, 0x00, 0xcb, 0x9c, 0x37, 0xaa, 0x48, 0x13, 0x12, 0x0a, 0xfa, 0xdd, 0x44, 0x9c, 0x4f,
  0x52, 0xb0, 0xf4, 0xdf, 0xae, 0x04, 0xf5, 0x79, 0x79, 0x08, 0xa3, 0x24, 0x18, 0xfc, 0x4b, 0x2b,
  0x84, 0xc0, 0x2d, 0xb9, 0xd5, 0xc7, 0xfe, 0xf4, 0xc1, 0x1f, 0x58, 0xcb, 0xb8, 0x6d, 0x9c, 0x7a,
  0x74, 0xe7, 0x98, 0x29, 0xab, 0x11, 0xb5, 0xe3, 0x70, 0xa0, 0xa1, 0xcd, 0x4c, 0x88, 0x99, 0x93,
  0x8c, 0x91, 0x70, 0xe2, 0xab, 0x0f, 0x1c, 0xbe, 0x93, 0xa9, 0xff, 0x63, 0xd5, 0xe4, 0x07, 0x60,
  0xd3, 0xa3, 0xbf, 0x9d, 0x5b, 0x09, 0xf1, 0xd5, 0x8e, 0xe3, 0x53, 0xf4, 0x8e, 0x63, 0xfa, 0x3f,
  0xa7, 0xdb, 0xb4, 0x66, 0xdf, 0x62, 0x66, 0xd6, 0xd1, 0x6e, 0x41, 0x8d, 0xf2, 0x2d, 0xb5, 0xea,
  0x77, 0x4a, 0x9f, 0x9d, 0x58, 0xe2, 0x2b, 0x59, 0xc0, 0x40, 0x23, 0xed, 0x2d, 0x28, 0x82, 0x45,
  0x3e, 0x79, 0x54, 0x92, 0x26, 0x98, 0xe0, 0x80, 0x48, 0xa8, 0x37, 0xef, 0xf0, 0xd6, 0x79, 0x60,
  0x16, 0xde, 0xac, 0xe8, 0x0e, 0xcd, 0x6e, 0xac, 0x44, 0x17, 0x38, 0x2f, 0x49, 0xda, 0xe1, 0x45,
  0x3e, 0x2a, 0xb9, 0x36, 0x53, 0xcf, 0x3a, 0x50, 0x06, 0xf7, 0x2e, 0xe8, 0xc4, 0x57, 0x49, 0x6c,
  0x61, 0x21, 0x18, 0xd5, 0x04, 0xad, 0x78, 0x3c, 0x2c, 0x3a, 0x80, 0x6b, 0xa7, 0xeb, 0xaf, 0x15,
  0x14, 0xe9, 0xd8, 0x89, 0xc1, 0xb9, 0x38, 0x6c, 0xe2, 0x91, 0x6c, 0x8a, 0xff, 0x64, 0xb9, 0x77,
  0x25, 0x57, 0x30, 0xc0, 0x1b, 0x24, 0xa3, 0xe1, 0xdc, 0xe9, 0xdf, 0x47, 0x7c, 0xb5, 0xb4, 0x24,
  0x08, 0x05, 0x30, 0xec, 0x2d, 0xbd, 0x0b, 0xbf, 0x45, 0xbf, 0x50, 0xb9, 0xa9, 0xf3, 0xeb, 0x98,
  0x01, 0x12, 0xad, 0xc8, 0x88, 0xc6, 0x98, 0x34, 0x5f, 0x8d, 0x0a, 0x3c, 0xc6, 0xe9, 0xd5, 0x95,
  0x95, 0x6d, 0xde
};

const uint8_t g_memfault_cert_digicert_global_root_g2[] = {
  0x30, 0x82, 0x03, 0x8e, 0x30, 0x82, 0x02, 0x76, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x03,
  0x3a, 0xf1, 0xe6, 0xa7, 0x11, 0xa9, 0xa0, 0xbb, 0x28, 0x64, 0xb1, 0x1d, 0x09, 0xfa, 0xe5, 0x30,
  0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30, 0x61,
  0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x15, 0x30,
  0x13, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0c, 0x44, 0x69, 0x67, 0x69, 0x43, 0x65, 0x72, 0x74,
  0x20, 0x49, 0x6e, 0x63, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x10, 0x77,
  0x77, 0x77, 0x2e, 0x64, 0x69, 0x67, 0x69, 0x63, 0x65, 0x72, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x31,
  0x20, 0x30, 0x1e, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x17, 0x44, 0x69, 0x67, 0x69, 0x43, 0x65,
  0x72, 0x74, 0x20, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x47,
  0x32, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x33, 0x30, 0x38, 0x30, 0x31, 0x31, 0x32, 0x30, 0x30, 0x30,
  0x30, 0x5a, 0x17, 0x0d, 0x33, 0x38, 0x30, 0x31, 0x31, 0x35, 0x31, 0x32, 0x30, 0x30, 0x30, 0x30,
  0x5a, 0x30, 0x61, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53,
  0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0c, 0x44, 0x69, 0x67, 0x69, 0x43,
  0x65, 0x72, 0x74, 0x20, 0x49, 0x6e, 0x63, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x0b,
  0x13, 0x10, 0x77, 0x77, 0x77, 0x2e, 0x64, 0x69, 0x67, 0x69, 0x63, 0x65, 0x72, 0x74, 0x2e, 0x63,
  0x6f, 0x6d, 0x31, 0x20, 0x30, 0x1e, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x17, 0x44, 0x69, 0x67,
  0x69, 0x43, 0x65, 0x72, 0x74, 0x20, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x52, 0x6f, 0x6f,
  0x74, 0x20, 0x47, 0x32, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
  0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a,
  0x02, 0x82, 0x01, 0x01, 0x00, 0xbb, 0x37, 0xcd, 0x34, 0xdc, 0x7b, 0x6b, 0xc9, 0xb2, 0x68, 0x90,
  0xad, 0x4a, 0x75, 0xff, 0x46, 0xba, 0x21, 0x0a, 0x08, 0x8d, 0xf5, 0x19, 0x54, 0xc9, 0xfb, 0x88,
  0xdb, 0xf3, 0xae, 0xf2, 0x3a, 0x89, 0x91, 0x3c, 0x7a, 0xe6, 0xab, 0x06, 0x1a, 0x6b, 0xcf, 0xac,
  0x2d, 0xe8, 0x5e, 0x09, 0x24, 0x44, 0xba, 0x62, 0x9a, 0x7e, 0xd6, 0xa3, 0xa8, 0x7e, 0xe0, 0x54,
  0x75, 0x20, 0x05, 0xac, 0x50, 0xb7, 0x9c, 0x63, 0x1a, 0x6c, 0x30, 0xdc, 0xda, 0x1f, 0x19, 0xb1,
  0xd7, 0x1e, 0xde, 0xfd, 0xd7, 0xe0, 0xcb, 0x94, 0x83, 0x37, 0xae, 0xec, 0x1f, 0x43, 0x4e, 0xdd,
  0x7b, 0x2c, 0xd2, 0xbd, 0x2e, 0xa5, 0x2f, 0xe4, 0xa9, 0xb8, 0xad, 0x3a, 0xd4, 0x99, 0xa4, 0xb6,
  0x25, 0xe9, 0x9b, 0x6b, 0x00, 0x60, 0x92, 0x60, 0xff, 0x4f, 0x21, 0x49, 0x18, 0xf7, 0x67, 0x90,
  0xab, 0x61, 0x06, 0x9c, 0x8f, 0xf2, 0xba, 0xe9, 0xb4, 0xe9, 0x92, 0x32, 0x6b, 0xb5, 0xf3, 0x57,
  0xe8, 0x5d, 0x1b, 0xcd, 0x8c, 0x1d, 0xab, 0x95, 0x04, 0x95, 0x49, 0xf3, 0x35, 0x2d, 0x96, 0xe3,
  0x49, 0x6d, 0xdd, 0x77, 0xe3, 0xfb, 0x49, 0x4b, 0xb4, 0xac, 0x55, 0x07, 0xa9, 0x8f, 0x95, 0xb3,
  0xb4, 0x23, 0xbb, 0x4c, 0x6d, 0x45, 0xf0, 0xf6, 0xa9, 0xb2, 0x95, 0x30, 0xb4, 0xfd, 0x4c, 0x55,
  0x8c, 0x27, 0x4a, 0x57, 0x14, 0x7c, 0x82, 0x9d, 0xcd, 0x73, 0x92, 0xd3, 0x16, 0x4a, 0x06, 0x0c,
  0x8c, 0x50, 0xd1, 0x8f, 0x1e, 0x09, 0xbe, 0x17, 0xa1, 0xe6, 0x21, 0xca, 0xfd, 0x83, 0xe5, 0x10,
  0xbc, 0x83, 0xa5, 0x0a, 0xc4, 0x67, 0x28, 0xf6, 0x73, 0x14, 0x14, 0x3d, 0x46, 0x76, 0xc3, 0x87,
  0x14, 0x89, 0x21, 0x34, 0x4d, 0xaf, 0x0f, 0x45, 0x0c, 0xa6, 0x49, 0xa1, 0xba, 0xbb, 0x9c, 0xc5,
  0xb1, 0x33, 0x83, 0x29, 0x85, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x42, 0x30, 0x40, 0x30, 0x0f,
  0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30,
  0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02, 0x01, 0x86, 0x30,
  0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x4e, 0x22, 0x54, 0x20, 0x18, 0x95,
  0xe6, 0xe3, 0x6e, 0xe6, 0x0f, 0xfa, 0xfa, 0xb9, 0x12, 0xed, 0x06, 0x17, 0x8f, 0x39, 0x30, 0x0d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01,
  0x01, 0x00, 0x60, 0x67, 0x28, 0x94, 0x6f, 0x0e, 0x48, 0x63, 0xeb, 0x31, 0xdd, 0xea, 0x67, 0x18,
  0xd5, 0x89, 0x7d, 0x3c, 0xc5, 0x8b, 0x4a, 0x7f, 0xe9, 0xbe, 0xdb, 0x2b, 0x17, 0xdf, 0xb0, 0x5f,
  0x73, 0x77, 0x2a, 0x32, 0x13, 0x39, 0x81, 0x67, 0x42, 0x84, 0x23, 0xf2, 0x45, 0x67, 0x35, 0xec,
  0x88, 0xbf, 0xf8, 0x8f, 0xb0, 0x61, 0x0c, 0x34, 0xa4, 0xae, 0x20, 0x4c, 0x84, 0xc6, 0xdb, 0xf8,
  0x35, 0xe1, 0x76, 0xd9, 0xdf, 0xa6, 0x42, 0xbb, 0xc7, 0x44, 0x08, 0x86, 0x7f, 0x36, 0x74, 0x24,
  0x5a, 0xda, 0x6c, 0x0d, 0x14, 0x59, 0x35, 0xbd, 0xf2, 0x49, 0xdd, 0xb6, 0x1f, 0xc9, 0xb3, 0x0d,
  0x47, 0x2a, 0x3d, 0x99, 0x2f, 0xbb, 0x5c, 0xbb, 0xb5, 0xd4, 0x20, 0xe1, 0x99, 0x5f, 0x53, 0x46,
  0x15, 0xdb, 0x68, 0x9b, 0xf0, 0xf3, 0x30, 0xd5, 0x3e, 0x31, 0xe2, 0x8d, 0x84, 0x9e, 0xe3, 0x8a,
  0xda, 0xda, 0x96, 0x3e, 0x35, 0x13, 0xa5, 0x5f, 0xf0, 0xf9, 0x70, 0x50, 0x70, 0x47, 0x41, 0x11,
  0x57, 0x19, 0x4e, 0xc0, 0x8f, 0xae, 0x06, 0xc4, 0x95, 0x13, 0x17, 0x2f, 0x1b, 0x25, 0x9f, 0x75,
  0xf2, 0xb1, 0x8e, 0x99, 0xa1, 0x6f, 0x13, 0xb1, 0x41, 0x71, 0xfe, 0x88, 0x2a, 0xc8, 0x4f, 0x10,
  0x20, 0x55, 0xd7, 0xf3, 0x14, 0x45, 0xe5, 0xe0, 0x44, 0xf4, 0xea, 0x87, 0x95, 0x32, 0x93, 0x0e,
  0xfe, 0x53, 0x46, 0xfa, 0x2c, 0x9d, 0xff, 0x8b, 0x22, 0xb9, 0x4b, 0xd9, 0x09, 0x45, 0xa4, 0xde,
  0xa4, 0xb8, 0x9a, 0x58, 0xdd, 0x1b, 0x7d, 0x52, 0x9f, 0x8e, 0x59, 0x43, 0x88, 0x81, 0xa4, 0x9e,
  0x26, 0xd5, 0x6f, 0xad, 0xdd, 0x0d, 0xc6, 0x37, 0x7d, 0xed, 0x03, 0x92, 0x1b, 0xe5, 0x77, 0x5f,
  0x76, 0xee, 0x3c, 0x8d, 0xc4, 0x5d, 0x56, 0x5b, 0xa2, 0xd9, 0x66, 0x6e, 0xb3, 0x35, 0x37, 0xe5,
  0x32, 0xb6
};

const uint8_t g_memfault_cert_amazon_root_ca1[] = {
  0x30, 0x82, 0x03, 0x41, 0x30, 0x82, 0x02, 0x29, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x13, 0x06,
  0x6c, 0x9f, 0xcf, 0x99, 0xbf, 0x8c, 0x0a, 0x39, 0xe2, 0xf0, 0x78, 0x8a, 0x43, 0xe6, 0x96, 0x36,
  0x5b, 0xca, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x30, 0x39, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53,
  0x31, 0x0f, 0x30, 0x0d, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x06, 0x41, 0x6d, 0x61, 0x7a, 0x6f,
  0x6e, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10, 0x41, 0x6d, 0x61, 0x7a,
  0x6f, 0x6e, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x20, 0x31, 0x30, 0x1e, 0x17, 0x0d,
  0x31, 0x35, 0x30, 0x35, 0x32, 0x36, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x17, 0x0d, 0x33,
  0x38, 0x30, 0x31, 0x31, 0x37, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x30, 0x39, 0x31, 0x0b,
  0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x0f, 0x30, 0x0d, 0x06,
  0x03, 0x55, 0x04, 0x0a, 0x13, 0x06, 0x41, 0x6d, 0x61, 0x7a, 0x6f, 0x6e, 0x31, 0x19, 0x30, 0x17,
  0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10, 0x41, 0x6d, 0x61, 0x7a, 0x6f, 0x6e, 0x20, 0x52, 0x6f,
  0x6f, 0x74, 0x20, 0x43, 0x41, 0x20, 0x31, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a,
  0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30,
  0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xb2, 0x78, 0x80, 0x71, 0xca, 0x78, 0xd5, 0xe3,
  0x71, 0xaf, 0x47, 0x80, 0x50, 0x74, 0x7d, 0x6e, 0xd8, 0xd7, 0x88, 0x76, 0xf4, 0x99, 0x68, 0xf7,
  0x58, 0x21, 0x60, 0xf9, 0x74, 0x84, 0x01, 0x2f, 0xac, 0x02, 0x2d, 0x86, 0xd3, 0xa0, 0x43, 0x7a,
  0x4e, 0xb2, 0xa4, 0xd0, 0x36, 0xba, 0x01, 0xbe, 0x8d, 0xdb, 0x48, 0xc8, 0x07, 0x17, 0x36, 0x4c,
  0xf4, 0xee, 0x88, 0x23, 0xc7, 0x3e, 0xeb, 0x37, 0xf5, 0xb5, 0x19, 0xf8, 0x49, 0x68, 0xb0, 0xde,
  0xd7, 0xb9, 0x76, 0x38, 0x1d, 0x61, 0x9e, 0xa4, 0xfe, 0x82, 0x36, 0xa5, 0xe5, 0x4a, 0x56, 0xe4,
  0x45, 0xe1, 0xf9, 0xfd, 0xb4, 0x16, 0xfa, 0x74, 0xda, 0x9c, 0x9b, 0x35, 0x39, 0x2f, 0xfa, 0xb0,
  0x20, 0x50, 0x06, 0x6c, 0x7a, 0xd0, 0x80, 0xb2, 0xa6, 0xf9, 0xaf, 0xec, 0x47, 0x19, 0x8f, 0x50,
  0x38, 0x07, 0xdc, 0xa2, 0x87, 0x39, 0x58, 0xf8, 0xba, 0xd5, 0xa9, 0xf9, 0x48, 0x67, 0x30, 0x96,
  0xee, 0x94, 0x78, 0x5e, 0x6f, 0x89, 0xa3, 0x51, 0xc0, 0x30, 0x86, 0x66, 0xa1, 0x45, 0x66, 0xba,
  0x54, 0xeb, 0xa3, 0xc3, 0x91, 0xf9, 0x48, 0xdc, 0xff, 0xd1, 0xe8, 0x30, 0x2d, 0x7d, 0x2d, 0x74,
  0x70, 0x35, 0xd7, 0x88, 0x24, 0xf7, 0x9e, 0xc4, 0x59, 0x6e, 0xbb, 0x73, 0x87, 0x17, 0xf2, 0x32,
  0x46, 0x28, 0xb8, 0x43, 0xfa, 0xb7, 0x1d, 0xaa, 0xca, 0xb4, 0xf2, 0x9f, 0x24, 0x0e, 0x2d, 0x4b,
  0xf7, 0x71, 0x5c, 0x5e, 0x69, 0xff, 0xea, 0x95, 0x02, 0xcb, 0x38, 0x8a, 0xae, 0x50, 0x38, 0x6f,
  0xdb, 0xfb, 0x2d, 0x62, 0x1b, 0xc5, 0xc7, 0x1e, 0x54, 0xe1, 0x77, 0xe0, 0x67, 0xc8, 0x0f, 0x9c,
  0x87, 0x23, 0xd6, 0x3f, 0x40, 0x20, 0x7f, 0x20, 0x80, 0xc4, 0x80, 0x4c, 0x3e, 0x3b, 0x24, 0x26,
  0x8e, 0x04, 0xae, 0x6c, 0x9a, 0xc8, 0xaa, 0x0d, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x42, 0x30,
  0x40, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30, 0x03, 0x01,
  0x01, 0xff, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02,
  0x01, 0x86, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x84, 0x18, 0xcc,
  0x85, 0x34, 0xec, 0xbc, 0x0c, 0x94, 0x94, 0x2e, 0x08, 0x59, 0x9c, 0xc7, 0xb2, 0x10, 0x4e, 0x0a,
  0x08, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00,
  0x03, 0x82, 0x01, 0x01, 0x00, 0x98, 0xf2, 0x37, 0x5a, 0x41, 0x90, 0xa1, 0x1a, 0xc5, 0x76, 0x51,
  0x28, 0x20, 0x36, 0x23, 0x0e, 0xae, 0xe6, 0x28, 0xbb, 0xaa, 0xf8, 0x94, 0xae, 0x48, 0xa4, 0x30,
  0x7f, 0x1b, 0xfc, 0x24, 0x8d, 0x4b, 0xb4, 0xc8, 0xa1, 0x97, 0xf6, 0xb6, 0xf1, 0x7a, 0x70, 0xc8,
  0x53, 0x93, 0xcc, 0x08, 0x28, 0xe3, 0x98, 0x25, 0xcf, 0x23, 0xa4, 0xf9, 0xde, 0x21, 0xd3, 0x7c,
  0x85, 0x09, 0xad, 0x4e, 0x9a, 0x75, 0x3a, 0xc2, 0x0b, 0x6a, 0x89, 0x78, 0x76, 0x44, 0x47, 0x18,
  0x65, 0x6c, 0x8d, 0x41, 0x8e, 0x3b, 0x7f, 0x9a, 0xcb, 0xf4, 0xb5, 0xa7, 0x50, 0xd7, 0x05, 0x2c,
  0x37, 0xe8, 0x03, 0x4b, 0xad, 0xe9, 0x61, 0xa0, 0x02, 0x6e, 0xf5, 0xf2, 0xf0, 0xc5, 0xb2, 0xed,
  0x5b, 0xb7, 0xdc, 0xfa, 0x94, 0x5c, 0x77, 0x9e, 0x13, 0xa5, 0x7f, 0x52, 0xad, 0x95, 0xf2, 0xf8,
  0x93, 0x3b, 0xde, 0x8b, 0x5c, 0x5b, 0xca, 0x5a, 0x52, 0x5b, 0x60, 0xaf, 0x14, 0xf7, 0x4b, 0xef,
  0xa3, 0xfb, 0x9f, 0x40, 0x95, 0x6d, 0x31, 0x54, 0xfc, 0x42, 0xd3, 0xc7, 0x46, 0x1f, 0x23, 0xad,
  0xd9, 0x0f, 0x48, 0x70, 0x9a, 0xd9, 0x75, 0x78, 0x71, 0xd1, 0x72, 0x43, 0x34, 0x75, 0x6e, 0x57,
  0x59, 0xc2, 0x02, 0x5c, 0x26, 0x60, 0x29, 0xcf, 0x23, 0x19, 0x16, 0x8e, 0x88, 0x43, 0xa5, 0xd4,
  0xe4, 0xcb, 0x08, 0xfb, 0x23, 0x11, 0x43, 0xe8, 0x43, 0x29, 0x72, 0x62, 0xa1, 0xa9, 0x5d, 0x5e,
  0x08, 0xd4, 0x90, 0xae, 0xb8, 0xd8, 0xce, 0x14, 0xc2, 0xd0, 0x55, 0xf2, 0x86, 0xf6, 0xc4, 0x93,
  0x43, 0x77, 0x66, 0x61, 0xc0, 0xb9, 0xe8, 0x41, 0xd7, 0x97, 0x78, 0x60, 0x03, 0x6e, 0x4a, 0x72,
  0xae, 0xa5, 0xd1, 0x7d, 0xba, 0x10, 0x9e, 0x86, 0x6c, 0x1b, 0x8a, 0xb9, 0x59, 0x33, 0xf8, 0xeb,
  0xc4, 0x90, 0xbe, 0xf1, 0xb9
};

const size_t g_memfault_cert_digicert_global_root_ca_len =
  sizeof(g_memfault_cert_digicert_global_root_ca);
const size_t g_memfault_cert_digicert_global_root_g2_len =
  sizeof(g_memfault_cert_digicert_global_root_g2);
const size_t g_memfault_cert_amazon_root_ca1_len = sizeof(g_memfault_cert_amazon_root_ca1);
