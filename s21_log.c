#include "s21_math.h"

long double s21_log(double x) {
    int ex_pow = 0;
    double result = 0;
    double compare = 0;
    for (; x >= S21_EXP; x /= S21_EXP, ex_pow++) {
        continue;
    }
    int i;
    for (i = 0; i < 100; i++) {
        compare = result;
        result = compare + 2 * (x - (double) s21_exp(compare)) / (x + (double) s21_exp(compare));
    }
    return (result + ex_pow);
}
