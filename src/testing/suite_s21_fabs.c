#include "../headers/math_tests.h"

START_TEST(test_fabs_1) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.), fabs(0.), S21_CHECK);
}
END_TEST

START_TEST(test_fabs_2) {
  ck_assert_ldouble_eq_tol(s21_fabs(2 * S21_PI), fabs(2 * S21_PI), S21_CHECK);
}
END_TEST

START_TEST(test_fabs_3) {
  ck_assert_ldouble_eq_tol(s21_fabs(1.), fabs(1.), S21_CHECK);
}
END_TEST

START_TEST(test_fabs_4) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.), fabs(-1.), S21_CHECK);
}
END_TEST

START_TEST(test_fabs_5) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.5), fabs(0.5), S21_CHECK);
}
END_TEST

START_TEST(test_fabs_6) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.5), fabs(-0.5), S21_CHECK);
}
END_TEST

Suite *suite_s21_fabs(void) {
  Suite *s;
  TCase *tc_fabs;

  s = suite_create("S21_fabs");
  tc_fabs = tcase_create("S21_fabs");

  tcase_add_test(tc_fabs, test_fabs_1);
  tcase_add_test(tc_fabs, test_fabs_2);
  tcase_add_test(tc_fabs, test_fabs_3);
  tcase_add_test(tc_fabs, test_fabs_4);
  tcase_add_test(tc_fabs, test_fabs_5);
  tcase_add_test(tc_fabs, test_fabs_6);

  suite_add_tcase(s, tc_fabs);
  return s;
}