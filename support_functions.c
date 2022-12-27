#include "s21_math.h"

long double pow_integer(double x, int n) {
    long double result = x;
    for (int i = 1; i < n; i++)
        result *= x;
    n == 0 ? result = 1.0 : 0;
    return result;
}

long double factorial(long double x) {
    long double result = x;
    if (result == 0.0)
        return 1;
    else
        return result * (factorial(result - 1));
}