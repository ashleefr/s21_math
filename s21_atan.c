#include "s21_math.h"

long double s21_atan(double x){
    long double temp, result = 0.;
    if (x == -1) {
        result = - S21_PI / 4;
    } else if (x == 1) {
        result = S21_PI / 4;
    } else if  (s21_fabs(x) < 1) {
        long double x_degree = x;
        for (int n = 0; n < 5000; n++) {
            temp = pow_integer(-1.0, n) * x_degree / (2 * n + 1);
            result += temp;
            x_degree *= x * x;
        }
    } else if (x > 0){
        long double x_degree = 1 / x;
        for (int i = 0; i < 7000; i++) {
            temp = s21_pow(-1, i) * x_degree / (2 * i + 1);
            result += temp;
            x_degree *= 1 / (x * x);
        }
        result = S21_PI / 2 - result;
    } else {
        double tmp = s21_fabs(x);
        long double x_degree = 1 / tmp;
        for (int i = 0; i < 7000; i++) {
            temp = s21_pow(-1, i) * x_degree / (2 * i + 1);
            result += temp;
            x_degree *= 1 / (tmp * tmp);
        }
        result = - (S21_PI / 2 - result);}
     
    return result;
}
