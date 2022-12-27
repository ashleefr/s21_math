#include "s21_math.h"

long double s21_acos(double x) {
    long double result = x;
    if (s21_fabs(x) <= 1) {
        result = S21_PI / 2 - s21_asin(x);
    } else {
        result = S21_NAN;
    }
    return result;
}
