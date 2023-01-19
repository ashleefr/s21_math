#include "math_tests.h"

START_TEST(test_exp_1) {
        ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), S21_CHECK);
} END_TEST

START_TEST(test_exp_2) {
    ck_assert_ldouble_eq_tol(s21_exp(2 * S21_PI), exp(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_exp_3) {
    ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), S21_CHECK);
} END_TEST

START_TEST(test_exp_4) {
    ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), S21_CHECK);
} END_TEST

START_TEST(test_exp_5) {
    ck_assert_ldouble_eq_tol(s21_exp(0.5), exp(0.5), S21_CHECK);
} END_TEST

START_TEST(test_exp_6) {
    ck_assert_ldouble_eq_tol(s21_exp(-0.5), exp(-0.5), S21_CHECK);
} END_TEST

        Suite *suite_s21_exp(void) {
    Suite *s;
    TCase *tc_exp;

    s = suite_create("S21_exp");
    tc_exp = tcase_create("S21_exp");

    tcase_add_test(tc_exp, test_exp_1);
    tcase_add_test(tc_exp, test_exp_2);
    tcase_add_test(tc_exp, test_exp_3);
    tcase_add_test(tc_exp, test_exp_4);
    tcase_add_test(tc_exp, test_exp_5);
    tcase_add_test(tc_exp, test_exp_6);

    suite_add_tcase(s, tc_exp);
    return s;
}