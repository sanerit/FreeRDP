/**
 * FreeRDP: A Remote Desktop Protocol Client
 * ASN.1 Basic Encoding Rules (DER)
 *
 * Copyright 2011 Samsung, Author Jiten Pathy
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_CRYPTO_DER_H
#define FREERDP_CRYPTO_DER_H

#include <freerdp/crypto/er.h>
#include <freerdp/utils/memory.h>

FREERDP_API int _der_skip_length(int length);
FREERDP_API int der_write_length(STREAM* s, int length);
FREERDP_API int der_get_content_length(int length);
FREERDP_API int der_skip_octet_string(int length);
FREERDP_API int der_skip_sequence_tag(int length);
FREERDP_API int der_write_sequence_tag(STREAM* s, int length);
FREERDP_API int der_skip_contextual_tag(int length);
FREERDP_API int der_write_contextual_tag(STREAM* s, uint8 tag, int length, boolean pc);
FREERDP_API void der_write_octet_string(STREAM* s, uint8* oct_str, int length);

#endif /* FREERDP_CRYPTO_DER_H */
