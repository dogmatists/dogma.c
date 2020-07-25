// This is free and unencumbered software released into the public domain.

#include "dogma.h"

#include <assert.h> /* for assert() */
#include <math.h>   /* for M_PI */
#include <stdlib.h> /* for EXIT_SUCCESS */

void test_Angle(void) {
  assert(AngleToRadians(AngleFromRadians(0)) == 0);
  assert(AngleToRadians(AngleFromRadians(0.5 * M_PI)) == 0.5 * M_PI);
  assert(AngleToRadians(AngleFromRadians(1 * M_PI)) == 1 * M_PI);
  assert(AngleToRadians(AngleFromRadians(2 * M_PI)) == 2 * M_PI);

  assert(AngleToDegrees(AngleFromDegrees(0)) == 0);
  assert(AngleToDegrees(AngleFromDegrees(90)) == 90);
  assert(AngleToDegrees(AngleFromDegrees(180)) == 180);
  assert(AngleToDegrees(AngleFromDegrees(360)) == 360);

  assert(AngleToTurns(AngleFromTurns(0)) == 0);
  assert(AngleToTurns(AngleFromTurns(0.25)) == 0.25);
  assert(AngleToTurns(AngleFromTurns(0.5)) == 0.5);
  assert(AngleToTurns(AngleFromTurns(1)) == 1);
}

void test_Latitude(void) {
  // TODO
}

void test_Longitude(void) {
  // TODO
}

int main(void) {
  test_Angle();
  test_Latitude();
  test_Longitude();

  return EXIT_SUCCESS;
}
