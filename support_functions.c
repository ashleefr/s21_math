#include "main.h"

long double pow_integer(double x, int n) {
    long double result = x;
    for (int i = 1; i < n; i++)
        result *= x;
    n == 0 ? result = 1 : 0;
    return result;
}

long double factorial(int x) {
    long double result = (long double) x;
    if (result == 0)
        return 1;
    else
        return result * (factorial(result - 1));
}