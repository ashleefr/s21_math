#include "s21_math.h"

long double s21_sin(double x) {
    long double result = 0, temp;
    while (s21_abs(x) > 2 * S21_PI) {
        if (x > 0) {
            x -= 2 * S21_PI;
        } else {
            x += 2 * S21_PI;
        }
    }
    temp = x;
    for(int i = 3; i < 100; i += 2) {
        result += temp;
        temp *=  - x * x / (i * (i - 1));
        // printf("[DEBUG] temp = %Lf  temp1 = %Lf\n", temp, temp1);
        // getchar();
    }
    return result;
}
