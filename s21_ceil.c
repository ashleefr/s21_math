#include "s21_math.h"


long double s21_ceil(double x) {
    int result = 0;
    int check_minus = 0;

    if (x < 0) {
        x = -x;
        check_minus = 1;
    }

    while (result < x) {
        result++;
    }
    check_minus == 1 ? result-- : 0;
    check_minus == 1 ? result = -result : 0;
    return result;
} // возвращает ближайшее целое число, не меньшее заданного значения
