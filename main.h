#ifndef __LITTLE_ENDIAN__
#define __LITTLE_ENDIAN__

 //// CONSTANTS ////

#define S21_EXP 2.7182818284590452353602874713527

 //// LIBRARIES ////

#include <stdio.h>
#include <stdlib.h>

//// MAIN FUNCTIONS ////

int s21_abs(int x);  // вычисляет абсолютное значение целого числа
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);  // возвращает ближайшее целое число, не меньшее заданного значения
long double s21_cos(double x);
long double s21_exp(double x);  // возвращает значение e, возведенное в заданную степень
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double x, double y);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

//// SUPPORT FUNCTIONS ////


#endif // __LITTLE_ENDIAN__