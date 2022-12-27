#include "s21_math.h"

long double s21_sin(double x) {
    long double result = 0;
    int sign = 1;
    while (s21_abs(x) > 2 * S21_PI) {
        if (x > 0) {
            x -= S21_PI;
        } else {
            x += S21_PI;
        }
    }
    for(int i = 1; i < 50; i += 2) {
        result += sign * pow_integer(x, i) / factorial(i);
        sign = -sign;
    }
    return result;
}
