/** @file
  Copyright (C) 2005 - 2015, Apple Inc.  All rights reserved.<BR>

  This program and the accompanying materials have not been licensed.
  Neither is its usage, its redistribution, in source or binary form,
  licensed, nor implicitely or explicitely permitted, except when
  required by applicable law.

  Unless required by applicable law or agreed to in writing, software
  distributed is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
  OR CONDITIONS OF ANY KIND, either express or implied.
**/

#ifndef EFI_OS_IDENTIFICATION_H_
#define EFI_OS_IDENTIFICATION_H_

// EFI_OS_IDENTIFICATION_PROTOCOL_GUID
#define EFI_OS_IDENTIFICATION_PROTOCOL_GUID \
  { 0xC5C5DA95, 0x7D5C, 0x45E6, { 0xB2, 0xF1, 0x3F, 0xD5, 0x2B, 0xB1, 0x00, 0x77 } }

// OS_IDENTIFICATION_OS_VENDOR
typedef
VOID
(EFIAPI *OS_IDENTIFICATION_OS_VENDOR)(
  IN CHAR8  *OSName
  );

// OS_IDENTIFICATION_OS_NAME
typedef
VOID
(EFIAPI *OS_IDENTIFICATION_OS_NAME)(
  IN CHAR8  *OSName
  );

// EFI_OS_IDENTIFICATION_PROTOCOL
typedef struct {
  UINTN                       Revision;  ///< 
  OS_IDENTIFICATION_OS_VENDOR OSVendor;  ///< 
  OS_IDENTIFICATION_OS_NAME   OSName;    ///< 
} EFI_OS_IDENTIFICATION_PROTOCOL;

// gEfiOsIdentificationProtocolGuid
extern EFI_GUID gEfiOsIdentificationProtocolGuid;

#endif // EFI_OS_IDENTIFICATION_H_
