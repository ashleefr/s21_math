#include "/../headers/s21_math.h"

long double s21_fmod(double x, double y) {
  int check_minus = 0;
  if (x < y) {
    check_minus = 1;
    x = -x;
  }
  y < 0 ? y = -y : 0;

  while (x >= y && y != 0) {
    x -= y;
  }
  check_minus ? x = -x : 0;
  y == 0 ? x = S21_NAN : 0;
  return (long double)x;
}  // остаток операции деления с плавающей точкой
