#include "s21_math.h"
#include <math.h>

int main() {
    double x;
    double y;
    printf("Insert x:");
    scanf("%lf", &x);
    printf("Insert y:");
    scanf("%lf", &y);

    printf("Abs x is %d\n", s21_abs(x)); // нужно сделать проверку на целое число
    printf("Ceil x is %d\n", (int) s21_ceil(x));
    printf("Exp x is %.6Lf\n", s21_exp(x)); // пока что работает только с целыми
    printf("FAbs x is %Lf\n", s21_fabs(x));
    printf("x mod y is %Lf\n", s21_fmod(x, y));
    return 0;
}
