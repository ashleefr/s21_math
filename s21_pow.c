#include "s21_math.h"

long double s21_pow(double x, double y) {
    long double result;
    result = s21_exp(y * (double) s21_log(x));
    return result;
} // x^y = e^(y*ln(x))
