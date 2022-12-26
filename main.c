#include "main.h"
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

int s21_abs(int x) {
    x < 0 ? x = -x : 0;
    return x;
} // вычисляет абсолютное значение целого числа

long double s21_acos(double x) {

}

long double s21_asin(double x) {

}

long double s21_atan(double x){

}

long double s21_ceil(double x) {
    int result = 0;
    int check_minus = 0;

    if (x < 0) {
        x = -x;
        check_minus = 1;
    }

    while (result < x) {
        result++;
    }
    check_minus == 1 ? result-- : 0;
    check_minus == 1 ? result = -result : 0;
    return result;
} // возвращает ближайшее целое число, не меньшее заданного значения

long double s21_cos(double x) {

}

long double s21_exp(double x) {
    long double result = 0;
//    int check_minus = 0;
//    x < 0 ? check_minus = 1 : 0;
    int i = 0;
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

long double s21_fabs(double x) {
    x < 0 ? x = -x : 0;
    return x;
} // вычисляет абсолютное значение числа с плавающей точкой

long double s21_floor(double x) {

}

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

long double s21_log(double x) {

}

long double s21_pow(double x, double y) {

} // a^x = e^(x*ln(a))

long double s21_sin(double x) {

}

long double s21_sqrt(double x) {

}

long double s21_tan(double x) {

}