#include "../headers/s21_math.h"

long double pow_integer(double x, double n) {
  long double result = (long double)x;
  for (int i = 1; i < (int)n; i++) result *= x;
  n == 0 ? result = 1.0 : 0;
  return result;
}

long double factorial(double x) {
  long double result = (long double)x;
  if (result == 0)
    return 1;
  else
    return result * (factorial((double)result - 1));
}

long double double_factorial(int x) {
  long double result = 1;
  if (s21_fmod(x, 2) == 0) {
    for (int i = 2; i <= x; i = i + 2) result *= i;
  } else if (s21_fmod(x, 2) == 1) {
    for (int i = 1; i <= x; i = i + 2) result *= i;
  }

  return result;
}