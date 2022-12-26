#include "main.h"

int main() {
    double x;
    double y;
    printf("Insert x:");
    scanf("%lf", &x);
    printf("Insert y :");
    scanf("%lf", &y);

    printf("Abs x is %d\n", s21_abs(x)); // нужно сделать проверку на целое число
    printf("Ceil x is %d\n", (int) s21_ceil(x));
    printf("Exp x is %Lf\n", s21_exp(x)); // пока что работает только с целыми
    printf("Abs x is %Lf\n", s21_fabs(x));
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
//    result--;
    check_minus == 1 ? result = -result : 0;
    return result;
} // возвращает ближайшее целое число, не меньшее заданного значения

long double s21_cos(double x) {

}

long double s21_exp(double x) {
    long double result = 1;

    for (double i = 0.; i < x; i++) { // Целая часть
        result = result * S21_EXP;
        long double test = S21_EXP;
    }

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

    while (x > y) {
        x -= y;
    }

    if (check_minus) { // ПРОВЕРИТЬ НА МАКЕ, НУЖНО ЛИ ТАК ДЕЛАТЬ
        x -= y;
        x = -x;
    }
    result = x;
    return result;
} // остаток операции деления с плавающей точкой

long double s21_log(double x) {

}

long double s21_pow(double x, double y) {

}

long double s21_sin(double x) {

}

long double s21_sqrt(double x) {

}

long double s21_tan(double x) {

}