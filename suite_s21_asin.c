#include "math_tests.h"

START_TEST(test_asin_1) {
        ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), S21_CHECK);
} END_TEST

START_TEST(test_asin_2) {
    double num = 2 * S21_PI;
    long double orig_res = asin(num), our_res = s21_asin(num);
    int suc = isnan(orig_res) && isnan(our_res) ? 1 : 0;
    ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(test_asin_3) {
    ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), S21_CHECK);
} END_TEST

START_TEST(test_asin_4) {
    ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), S21_CHECK);
} END_TEST

START_TEST(test_asin_5) {
    ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), S21_CHECK);
} END_TEST

START_TEST(test_asin_6) {
    ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), S21_CHECK);
} END_TEST


Suite *suite_s21_asin(void) {
    Suite *s;
    TCase *tc_asin;

    s = suite_create("S21_asin");
    tc_asin = tcase_create("S21_asin");

    tcase_add_test(tc_asin, test_asin_1);
    tcase_add_test(tc_asin, test_asin_2);
    tcase_add_test(tc_asin, test_asin_3);
    tcase_add_test(tc_asin, test_asin_4);
    tcase_add_test(tc_asin, test_asin_5);
    tcase_add_test(tc_asin, test_asin_6);


    suite_add_tcase(s, tc_asin);
    return s;
}