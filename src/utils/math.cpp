#include "../../include/math.h"

double m_abs(double x)
{
  if (x < 0) return -x;
  else return x;
}

double m_sqr(double x)
{
  return (x * x);
}

double m_sqrt(double x)
{
  /* This implementation of a square root finder uses the Newton's approximation
   * method. This implementation will be an iterative variation of the recursive
   * version you can find in the MIT press book Structure and Interpretation of
   * Computer Programs. */

  /* Can't take negative numbers as arguments */
  if (x < 0) return 0.0;

  double y = 1.0; /* This variable represents the initial guess */
  double tolerance = 0.001; /* This is the tolerance to decide if the guess is precise enough */

  while (!(m_abs(m_sqr(y) - x) < tolerance))
  {
    y = (y + (x / y)) / 2;
  }
  return y;
}
