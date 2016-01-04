#ifndef _JEDIS_MURMUR_HASH_
#define _JEDIS_MURMUR_HASH_ 

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <sys/types.h>

extern int64_t
jedis_murmur_hash( const void * key);

#endif
