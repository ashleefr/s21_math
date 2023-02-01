#include "/../headers/s21_math.h"

long double s21_sqrt(double x) {
  long double result = 0;
  long double temp = x;
  if (x < 0) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 0;
  } else if (x == S21_INF) {
    result = S21_INF;
  } else {
    result = 0.5 * (temp + x / temp);
    while (temp != result) {
      temp = result;
      result = 0.5 * (temp + x / temp);
      //        printf("\t[DEBUG] result = %Lf\n", result);
    }
    result = temp;
  }
  return result;
}
