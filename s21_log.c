#include "s21_math.h"

long double s21_log(double x) {
    long double result;
    x = x - 1;
    int i = 1;
    long double temp = pow_integer(-1, i - 1) * (pow_integer(x, i) / i);
    printf("\t[DEBUG] %d: pow = %Lf\tn = %d\tresult = %Lf\t temp = %.9Lf\n", i, pow_integer(x, i), i, result, temp);
    while (s21_fabs(temp) > S21_EPS) {
        temp = pow_integer(-1, i - 1) * (pow_integer(x, i) / i);
        result += temp;
        i++;
        printf("\t[DEBUG] %d: pow = %Lf\tn = %d\tresult = %Lf\t temp = %.9Lf\n", i, pow_integer(x, i), i, result, temp);
    }

    return result;
}
