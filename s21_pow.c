#include "s21_math.h"

long double s21_pow(double x, double y) {
    long double result = 0;
    int sign = x < 0 && s21_fmod(y, 2) != 0 ? -1 : 1;
    if (x < 0 && s21_fmod(y, 1) != 0) {
        result = S21_NAN;
    } else {
        x = x < 0 ? -x : x; 
        //    x = y < 0 ? 1 / x : x;
        result = s21_exp(y * (double) s21_log(x));

    }
    
    return sign * result;
} // x^y = e^(y*ln(x))
