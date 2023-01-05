#include "math_tests.h"

START_TEST(test_pow_1) {
        ck_assert_ldouble_eq_tol(s21_pow(0.0, 0.0), pow(0.0, 0.0), S21_CHECK);
} END_TEST

START_TEST(test_pow_2) {
    ck_assert_ldouble_eq_tol(s21_pow(2 * S21_PI, S21_PI), pow(2 * S21_PI, S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_pow_3) {
    ck_assert_ldouble_eq_tol(s21_pow(1.0, 2), pow(1.0, 2), S21_CHECK);
} END_TEST

START_TEST(test_pow_4) {
    ck_assert_ldouble_eq_tol(s21_pow(-1.0, 2), pow(-1.0, 2), S21_CHECK);
} END_TEST

START_TEST(test_pow_5) {
    ck_assert_ldouble_eq_tol(s21_pow(0.5, 5), pow(0.5, 5), S21_CHECK);
} END_TEST

START_TEST(test_pow_6) {
    ck_assert_ldouble_eq_tol(s21_pow(-0.5, 5), pow(-0.5, 5), S21_CHECK);
} END_TEST

Suite *suite_s21_pow(void) {
    Suite *s;
    TCase *tc_pow;

    s = suite_create("S21_pow");
    tc_pow = tcase_create("S21_pow");

    tcase_add_test(tc_pow, test_pow_1);
    tcase_add_test(tc_pow, test_pow_2);
    tcase_add_test(tc_pow, test_pow_3);
    tcase_add_test(tc_pow, test_pow_4);
    tcase_add_test(tc_pow, test_pow_5);
    tcase_add_test(tc_pow, test_pow_6);

    suite_add_tcase(s, tc_pow);
return s;
}