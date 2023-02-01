#include <math.h>

#include "../headers/s21_math.h"

int main() {
  double x;
  double y;

  printf("Insert x:");
  scanf("%lf", &x);
  printf("Insert y:");
  scanf("%lf", &y);

  printf("[DONE]  abs x is %d | need: %d\n", s21_abs((int)x),
         abs((int)x));  // нужно сделать проверку на целое число
  printf("[DONE]  acos x is %.6Lf | need: %.6lf\n", s21_acos(x), acos(x));
  printf("[DONE]  asin x is %.6Lf | need: %.6lf\n", s21_asin(x), asin(x));
  printf("[DONE]  atan x is %.6Lf | need: %.6lf\n", s21_atan(x), atan(x));
  printf("[DONE]  ceil x is %.6Lf | need: %lf\n", s21_ceil(x), ceil(x));
  printf("[DONE]  cos x is %.6Lf | need: %.6lf\n", s21_cos(x), cos(x));
  printf("[DONE]  exp x is %.6Lf | need: %.6lf\n", s21_exp(x),
         exp(x));  // пока что работает только с целыми
  printf("[DONE]  fabs x is %.6Lf | need: %.6lf\n", s21_fabs(x), fabs(x));
  printf("[DONE]  floor x is %.6Lf | need: %.6lf\n", s21_floor(x), floor(x));
  printf("[DONE]  fmod of x and y is %.6Lf | need: %.6lf\n", s21_fmod(x, y),
         fmod(x, y));
  printf("[DONE]  log x is %.6Lf | need: %.6lf\n", s21_log(x), log(x));
  printf("[DONE]  pow x is %.6Lf | need: %.6lf\n", s21_pow(x, y), pow(x, y));
  printf("[DONE]  sin x is %.6Lf | need: %.6lf\n", s21_sin(x), sin(x));
  printf("[DONE]  sqrt x is %.6Lf | need: %.6lf\n", s21_sqrt(x), sqrt(x));
  printf("[DONE]  tan x is %.6Lf | need: %.6lf\n", s21_tan(x), tan(x));
  return 0;
}