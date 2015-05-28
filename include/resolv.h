#ifndef _LIBEGACY_RESOLV_H_
#define _LIBEGACY_RESOLV_H_

#include <limits.h>

#define b64_ntop __b64_ntop
#define b64_pton __b64_pton

#ifdef __cplusplus
extern "C" {
#endif
int b64_ntop (unsigned char const *, size_t, char *, size_t);
int b64_pton (char const *, unsigned char *, size_t);
#ifdef __cplusplus
}
#endif

#include_next <resolv.h>

#endif _LIBEGACY_RESOLV_H_
