#include "../headers/math_tests.h"

START_TEST(test_fmod_1) {
  ck_assert_ldouble_nan(s21_fmod(0.0, 0.0));
  ck_assert_ldouble_nan(fmod(0.0, 0.0));
}
END_TEST

START_TEST(test_fmod_2) {
  ck_assert_ldouble_eq_tol(s21_fmod(2 * S21_PI, S21_PI),
                           fmod(2 * S21_PI, S21_PI), S21_CHECK);
}
END_TEST

START_TEST(test_fmod_3) {
  ck_assert_ldouble_eq_tol(s21_fmod(1.0, 2), fmod(1.0, 2), S21_CHECK);
}
END_TEST

START_TEST(test_fmod_4) {
  ck_assert_ldouble_eq_tol(s21_fmod(-1.0, 2), fmod(-1.0, 2), S21_CHECK);
}
END_TEST

START_TEST(test_fmod_5) {
  ck_assert_ldouble_eq_tol(s21_fmod(0.5, 5), fmod(0.5, 5), S21_CHECK);
}
END_TEST

START_TEST(test_fmod_6) {
  ck_assert_ldouble_eq_tol(s21_fmod(-0.5, 5), fmod(-0.5, 5), S21_CHECK);
}
END_TEST

START_TEST(test_fmod_7) {
  ck_assert_ldouble_nan(s21_fmod(S21_NAN, S21_NAN));
  ck_assert_ldouble_nan(fmod(S21_NAN, S21_NAN));
}
END_TEST

START_TEST(test_fmod_8) {
  ck_assert_ldouble_eq_tol(s21_fmod(-0.5, -5), fmod(-0.5, -5), S21_CHECK);
}
END_TEST

START_TEST(test_fmod_9) {
  ck_assert_ldouble_eq_tol(s21_fmod(8, -5), fmod(8, -5), S21_CHECK);
}
END_TEST

Suite *suite_s21_fmod(void) {
  Suite *s;
  TCase *tc_fmod;

  s = suite_create("S21_fmod");
  tc_fmod = tcase_create("S21_fmod");

  tcase_add_test(tc_fmod, test_fmod_1);
  tcase_add_test(tc_fmod, test_fmod_2);
  tcase_add_test(tc_fmod, test_fmod_3);
  tcase_add_test(tc_fmod, test_fmod_4);
  tcase_add_test(tc_fmod, test_fmod_5);
  tcase_add_test(tc_fmod, test_fmod_6);
  tcase_add_test(tc_fmod, test_fmod_7);
  tcase_add_test(tc_fmod, test_fmod_8);
  tcase_add_test(tc_fmod, test_fmod_9);

  suite_add_tcase(s, tc_fmod);
  return s;
}