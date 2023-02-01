#include "/../headers/s21_math.h"

long double s21_floor(double x) {
  long double result;
  result = s21_ceil(x) == x ? s21_ceil(x) : s21_ceil(x) - 1;
  return result;
}