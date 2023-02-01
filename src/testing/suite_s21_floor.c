#include "math_tests.h"

START_TEST(test_floor_1) {
  ck_assert_ldouble_eq_tol(s21_floor(0.), floor(0.), S21_CHECK);
}
END_TEST

START_TEST(test_floor_2) {
  ck_assert_ldouble_eq_tol(s21_floor(2 * S21_PI), floor(2 * S21_PI), S21_CHECK);
}
END_TEST

START_TEST(test_floor_3) {
  ck_assert_ldouble_eq_tol(s21_floor(1.), floor(1.), S21_CHECK);
}
END_TEST

START_TEST(test_floor_4) {
  ck_assert_ldouble_eq_tol(s21_floor(-1.), floor(-1.), S21_CHECK);
}
END_TEST

START_TEST(test_floor_5) {
  ck_assert_ldouble_eq_tol(s21_floor(0.5), floor(0.5), S21_CHECK);
}
END_TEST

START_TEST(test_floor_6) {
  ck_assert_ldouble_eq_tol(s21_floor(-0.5), floor(-0.5), S21_CHECK);
}
END_TEST

Suite *suite_s21_floor(void) {
  Suite *s;
  TCase *tc_floor;

  s = suite_create("S21_floor");
  tc_floor = tcase_create("S21_floor");

  tcase_add_test(tc_floor, test_floor_1);
  tcase_add_test(tc_floor, test_floor_2);
  tcase_add_test(tc_floor, test_floor_3);
  tcase_add_test(tc_floor, test_floor_4);
  tcase_add_test(tc_floor, test_floor_5);
  tcase_add_test(tc_floor, test_floor_6);

  suite_add_tcase(s, tc_floor);
  return s;
}