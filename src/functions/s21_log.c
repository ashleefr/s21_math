#include "/../headers/s21_math.h"

long double s21_log(double x) {
  int denominator = 2;
  long double result = 0.0;
  long double term, temp = 0;
  int power_of_one = -1;
  if (x == S21_INF) {
    result = -S21_INF;
  } else if (x > 0.0 && x < 1.0) {
    term = x - 1.0;
    temp = term;
    while (s21_fabs((double)temp) > S21_EPS) {
      result += temp;
      term *= (x - 1.0);
      temp = term * power_of_one;
      temp /= denominator;
      power_of_one *= -1;
      denominator++;
    }
    result += temp;
  } else if (x < 0.0) {
    result = S21_NAN;
  } else if (x == 1.0) {
    result = 0.;
  } else if (x == 0.0) {
    result = -S21_INF;
  } else {
    term = (x - 1.0) / x;
    temp = term;
    while (denominator < 90000) {
      result += temp;
      term *= (x - 1.0) / x;
      temp = term * (1.0 / denominator);
      denominator++;
    }
  }
  return result;
}
