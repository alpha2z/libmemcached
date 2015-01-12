/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  HashKit library
 *
 *  Copyright (C) 2011-2012 Data Differential, http://datadifferential.com/
 *  Copyright (C) 2009 Brian Aker All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


/**
 * @file
 * @brief HashKit Header
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

HASHKIT_API
uint32_t libhashkit_one_at_a_time(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_fnv1_64(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_fnv1a_64(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_fnv1_32(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_fnv1a_32(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_crc32(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_hsieh(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_murmur(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_jenkins(const char *key, size_t key_length);

HASHKIT_API
uint32_t libhashkit_md5(const char *key, size_t key_length);

HASHKIT_LOCAL
uint32_t hashkit_one_at_a_time(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_fnv1_64(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_fnv1a_64(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_fnv1_32(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_fnv1a_32(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_crc32(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_hsieh(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_murmur(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_jenkins(const char *key, size_t key_length, void *context);

HASHKIT_LOCAL
uint32_t hashkit_md5(const char *key, size_t key_length, void *context);

HASHKIT_API
void libhashkit_md5_signature(const unsigned char *key, size_t length, unsigned char *result);

#ifdef __cplusplus
}
#endif