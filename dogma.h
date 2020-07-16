// This is free and unencumbered software released into the public domain.

#pragma once

/**
 * @file
 *
 * Dogma for C.
 *
 * @see https://github.com/dogmatists/dogma.c
 */

#ifndef __cplusplus
#if __STDC_VERSION__ < 201103L
#error "<dogma.h> requires a C11 or newer compiler (CFLAGS='-std=c11')"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h> // for bool
#include <stddef.h>  // for size_t
#include <stdint.h>  // for {u,}int*_t

enum {
  DOGMA_VERSION_MAJOR = 0,
  DOGMA_VERSION_MINOR = 0,
  DOGMA_VERSION_PATCH = 0,
};

typedef struct Angle {
  double radians;
} Angle;

#ifdef __cplusplus
} // extern "C"
#endif
