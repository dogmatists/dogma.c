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

#include <math.h>     // for M_PI
#include <stdbool.h>  // for bool
#include <stddef.h>   // for size_t
#include <stdint.h>   // for {u,}int*_t

enum {
  DOGMA_VERSION_MAJOR = 0,
  DOGMA_VERSION_MINOR = 0,
  DOGMA_VERSION_PATCH = 0,
};

#include <math.h>  // for M_PI

// See: https://dogma.dev/Angle
typedef struct Angle {
  double radians;
} Angle;

// Constructs an angle from radians.
static inline Angle AngleFromRadians(const double radians) {
  return (Angle){radians};
}

// Constructs an angle from degrees.
static inline Angle AngleFromDegrees(const double degrees) {
  return (Angle){degrees / 180.0 * M_PI};
}

// Constructs an angle from turns.
static inline Angle AngleFromTurns(const double turns) {
  return (Angle){turns * 2 * M_PI};
}

// The angle in radians.
static inline double AngleToRadians(const Angle angle) {
  return angle.radians;
}

// The angle in degrees.
static inline double AngleToDegrees(const Angle angle) {
  return angle.radians / M_PI * 180.0;
}

// The angle in turns.
static inline double AngleToTurns(const Angle angle) {
  return angle.radians / (2 * M_PI);
}

// See: https://dogma.dev/Latitude
typedef struct Latitude {
  Angle angle;
} Latitude;

// See: https://dogma.dev/Longitude
typedef struct Longitude {
  Angle angle;
} Longitude;

#ifdef __cplusplus
} // extern "C"
#endif
