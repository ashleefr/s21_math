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
    } else {
        long double x_degree = 1 / x;
        for (int n = 0; n < 7000; n++) {
            temp = pow_integer(-1.0, n) * x_degree / (2 * n + 1);
            result += temp;
            x_degree *= 1 / (x * x);
        }
        result = S21_PI / 2 - result;
    }
     
    return result;
}
