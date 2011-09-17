/* File: Point.c */
#include "Point.h"
#include <cmath>
Point::Point(int X, int Y)
{
  x=X;
  y=Y;
}
float Point::dist_origin()
{
  return pow(x*x + y*y, 0.5);
}
