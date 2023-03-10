#ifndef __SRC_HEADERS_MATH_TESTS__
#define __SRC_HEADERS_MATH_TESTS__

#include <check.h>
#include <math.h>

#include "s21_math.h"

int run_test(SRunner *sr);

Suite *suite_s21_abs(void);
Suite *suite_s21_acos(void);
Suite *suite_s21_asin(void);
Suite *suite_s21_atan(void);
Suite *suite_s21_ceil(void);
Suite *suite_s21_cos(void);
Suite *suite_s21_exp(void);
Suite *suite_s21_fabs(void);
Suite *suite_s21_floor(void);
Suite *suite_s21_fmod(void);
Suite *suite_s21_log(void);
Suite *suite_s21_pow(void);
Suite *suite_s21_sin(void);
Suite *suite_s21_sqrt(void);
Suite *suite_s21_tan(void);

#endif  //  __SRC_HEADERS_MATH_TESTS__