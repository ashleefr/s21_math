#include "../headers/math_tests.h"

START_TEST(test_sqrt_1) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.), sqrt(0.), S21_CHECK);
}
END_TEST

START_TEST(test_sqrt_2) {
  ck_assert_ldouble_eq_tol(s21_sqrt(2 * S21_PI), sqrt(2 * S21_PI), S21_CHECK);
}
END_TEST

START_TEST(test_sqrt_3) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1.), sqrt(1.), S21_CHECK);
}
END_TEST

START_TEST(test_sqrt_4) {
  ck_assert_ldouble_nan(s21_sqrt(-1.));
  ck_assert_ldouble_nan(sqrt(-1.));
}
END_TEST

START_TEST(test_sqrt_5) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.5), sqrt(0.5), S21_CHECK);
}
END_TEST

START_TEST(test_sqrt_6) {
  ck_assert_ldouble_nan(s21_sqrt(-0.5));
  ck_assert_ldouble_nan(sqrt(-0.5));
}
END_TEST

START_TEST(test_sqrt_7) {
  ck_assert_ldouble_nan(s21_sqrt(-10));
  ck_assert_ldouble_nan(sqrt(-10));
}
END_TEST

START_TEST(test_sqrt_8) {
  ck_assert_ldouble_infinite(s21_sqrt(S21_INF));
  ck_assert_ldouble_infinite(sqrt(S21_INF));
}
END_TEST

START_TEST(test_sqrt_9) {
  ck_assert_ldouble_nan(s21_sqrt(-10));
  ck_assert_ldouble_nan(sqrt(-10));
}
END_TEST

Suite *suite_s21_sqrt(void) {
  Suite *s;
  TCase *tc_sqrt;

  s = suite_create("S21_sqrt");
  tc_sqrt = tcase_create("S21_sqrt");

  tcase_add_test(tc_sqrt, test_sqrt_1);
  tcase_add_test(tc_sqrt, test_sqrt_2);
  tcase_add_test(tc_sqrt, test_sqrt_3);
  tcase_add_test(tc_sqrt, test_sqrt_4);
  tcase_add_test(tc_sqrt, test_sqrt_5);
  tcase_add_test(tc_sqrt, test_sqrt_6);
  tcase_add_test(tc_sqrt, test_sqrt_7);
  tcase_add_test(tc_sqrt, test_sqrt_8);
  tcase_add_test(tc_sqrt, test_sqrt_9);

  suite_add_tcase(s, tc_sqrt);
  return s;
}