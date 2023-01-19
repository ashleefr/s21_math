#include "s21_math.h"

long double s21_asin(double x) {
    long double result = x;
    if (s21_fabs(x) < 1) {
        for (int i = 1; i < 100; i++) {
            result += ((double_factorial((2 * i - 1))) / double_factorial((2 * i))) *
                      (pow_integer(x, 2 * i + 1) / (2 * i + 1));
        }
    } else if (s21_fabs(x) == 1) {
        result = x == 1 ? S21_PI / 2 : -S21_PI / 2;
    } else {
        result = S21_NAN;
    }
    return result;
}
