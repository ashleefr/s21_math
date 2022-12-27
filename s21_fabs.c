#include "s21_math.h"

long double s21_fabs(double x) {
    x < 0 ? x = -x : 0;
    return (long double) x;
} // вычисляет абсолютное значение числа с плавающей точкой
