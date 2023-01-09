#include "s21_math.h"

long double s21_pow(double x, double y) {
    long double result = 0;
    int sign = x < 0 && s21_fmod(y, 2) == 1 ? -1 : 1;
    x = x < 0 ? -x : x;
    if (y < 0) {
        // y = -y;
        x =  1 / x;
    }
    // printf("\t[DEBUG] x = %lf\ty = %lf\n", x, y);
    result = s21_exp(y * (double) s21_log(x));

    return sign * result;
} // x^y = e^(y*ln(x))
