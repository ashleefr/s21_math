#include "s21_math.h"

long double pow_integer(double x, double n) {
    long double result = (long double) x;
    for (int i = 1; i < (int) n; i++)
        result *= x;
    n == 0 ? result = 1 : 0;
    return result;
}

long double factorial(double x) {
    long double result = (long double) x;
    if (result == 0)
        return 1;
    else
        return result * (factorial((double) result - 1));
}