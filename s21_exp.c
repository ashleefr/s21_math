#include "s21_math.h"

long double s21_exp(double x) {
    long double result = 0;
//    int check_minus = 0;
//    x < 0 ? check_minus = 1 : 0;
    double i = 0;
    long double temp = pow_integer(x, i) / factorial(i);
    while (temp > S21_EPS) {
        temp = pow_integer(x, i) / factorial(i);
        result += temp;
        i++;
//        printf("[DEBUG] %i: our = %Lf\tmath=%lf\n", i, result, pow(x, i) / );
//        printf("[DEBUG] %d: pow = %Lf\tfactorial = %Lf\tresult = %Lf\tdivide = %Lf\n", i, pow_integer(x, i), factorial(i), result, pow_integer(x, i) / factorial(i));
    }

    x < 0 ? result = 1.0 / result : 0;
    return result;
} // возвращает значение e, возведенное в заданную степень
