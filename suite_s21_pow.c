#include "math_tests.h"

START_TEST(test_pow_1) {
        ck_assert_ldouble_eq_tol(s21_pow(0., 0.), pow(0., 0.), S21_CHECK);
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

START_TEST(test_pow_7) {
        ck_assert_ldouble_eq_tol(s21_pow(0.0, 1.0), pow(0.0, 1.0), S21_CHECK);
} END_TEST

START_TEST(test_pow_8) {
        ck_assert_ldouble_eq_tol(s21_pow(10.0, -1.0), pow(10.0, -1.0), S21_CHECK);
} END_TEST

START_TEST(test_pow_9) {
    ck_assert_ldouble_infinite(s21_pow(0, -2));
    ck_assert_ldouble_infinite(pow(0, -2));
} END_TEST

START_TEST(test_pow_10) {
    ck_assert_ldouble_eq_tol(s21_pow(0, 2), pow(0, 2), S21_CHECK);
} END_TEST

START_TEST(test_pow_11) {
    ck_assert_ldouble_eq_tol(s21_pow(5, 0), pow(5, 0), S21_CHECK);
} END_TEST

START_TEST(test_pow_12) {
    ck_assert_ldouble_eq_tol(s21_pow(-5, 0), pow(-5, 0), S21_CHECK);
} END_TEST

START_TEST(test_pow_13) {
    ck_assert_ldouble_nan(s21_pow(-2, 3.5));
    ck_assert_ldouble_nan(pow(-2, 3.5));
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
    tcase_add_test(tc_pow, test_pow_7);
    tcase_add_test(tc_pow, test_pow_8);
    tcase_add_test(tc_pow, test_pow_9);
    tcase_add_test(tc_pow, test_pow_10);
    tcase_add_test(tc_pow, test_pow_11);
    tcase_add_test(tc_pow, test_pow_12);
    tcase_add_test(tc_pow, test_pow_13);

    suite_add_tcase(s, tc_pow);
return s;
}