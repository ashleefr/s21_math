#include "s21_math.h"

long double s21_sin(double x) {
    long double result = 0;
    int sign = 1;
    for(int i = 1; i < 50; i += 2) {
        result += sign * pow_integer(x, i) / factorial(i);
        sign = -sign;
    }
    return result;
}
