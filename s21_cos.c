#include "s21_math.h"

long double s21_cos(double x) {
    while (s21_fabs(x) > 2 * S21_PI)
        if (x > 0) {
            x -= 2 * S21_PI;
        } else {
            x += 2 * S21_PI;
        }
    int sign = 1;
    (s21_fabs(x) > S21_PI / 2) ? sign = -1: 0;
    return sign * s21_sqrt(1 - pow_integer((double) s21_sin(x), 2));
}
