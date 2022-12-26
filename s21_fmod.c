#include "s21_math.h"

long double s21_fmod(double x, double y) {
    int check_minus = 0;
    if (x < y) {
        check_minus = 1;
        x = -x;
    }
    y < 0 ? y = -y : 0;
    long double result;

    while (x >= y) {
        x -= y;
    }
    check_minus ? x = -x : 0;
    return x;
} // остаток операции деления с плавающей точкой
