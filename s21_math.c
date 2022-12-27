#include "s21_math.h"
#include <math.h>

int main() {
    double x;
    double y;
    printf("Insert x:");
    scanf("%lf", &x);
    printf("Insert y:");
    scanf("%lf", &y);

    printf("[DONE]  abs x is %d | need: %d\n", s21_abs(x), abs(x)); // нужно сделать проверку на целое число
    printf("[NOT DONE]  acos x is %.6Lf | need: %.6lf\n", s21_acos(x), acos(x));
    printf("[NOT DONE]  asin x is %.6Lf | need: %.6lf\n", s21_asin(x), asin(x));
    printf("[NOT DONE]  atan x is %.6Lf | need: %.6lf\n", s21_atan(x), atan(x));
    printf("[DONE]  ceil x is %.6Lf | need: %lf\n", s21_ceil(x), ceil(x));
    printf("[NOT DONE]  cos x is %.6Lf | need: %.6lf\n", s21_cos(x), cos(x));
    printf("[DONE]  exp x is %.6Lf | need: %.6lf\n", s21_exp(x), exp(x)); // пока что работает только с целыми
    printf("[DONE]  fabs x is %.6Lf | need: %.6lf\n", s21_fabs(x), fabs(x));
    printf("[NOT DONE]  floor x is %.6Lf | need: %.6lf\n", s21_floor(x), floor(x));
    printf("[DONE]  fmod of x and y is %.6Lf | need: %.6lf\n", s21_fmod(x, y), fmod(x, y));
    printf("[WORK]  log x is %.6Lf | need: %.6lf\n", s21_log(x), log(x));
    printf("[NOT DONE]  pow x is %.6Lf | need: %.6lf\n", s21_pow(x, y), pow(x, y));
    printf("[NOT DONE]  sin x is %.6Lf | need: %.6lf\n", s21_sin(x), sin(x));
    printf("[NOT DONE]  sqrt x is %.6Lf | need: %.6lf\n", s21_sqrt(x), sqrt(x));
    printf("[NOT DONE]  tan x is %.6Lf | need: %.6lf\n", s21_tan(x), tan(x));
    return 0;
}