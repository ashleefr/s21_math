#include "math_tests.h"

START_TEST(test_ceil_1) {
        ck_assert_ldouble_eq_tol(s21_ceil(0), ceil(0), S21_CHECK);
} END_TEST

START_TEST(test_ceil_2) {
    ck_assert_ldouble_eq_tol(s21_ceil(2 * S21_PI), ceil(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_ceil_3) {
    ck_assert_ldouble_eq_tol(s21_ceil(1), ceil(1), S21_CHECK);
} END_TEST

START_TEST(test_ceil_4) {
    ck_assert_ldouble_eq_tol(s21_ceil(-1), ceil(-1), S21_CHECK);
} END_TEST

START_TEST(test_ceil_5) {
    ck_assert_ldouble_eq_tol(s21_ceil(0.5), ceil(0.5), S21_CHECK);
} END_TEST

START_TEST(test_ceil_6) {
    ck_assert_ldouble_eq_tol(s21_ceil(-0.5), ceil(-0.5), S21_CHECK);
} END_TEST

        Suite *suite_s21_ceil(void) {
    Suite *s;
    TCase *tc_ceil;

    s = suite_create("S21_ceil");
    tc_ceil = tcase_create("S21_ceil");

    tcase_add_test(tc_ceil, test_ceil_1);
    tcase_add_test(tc_ceil, test_ceil_2);
    tcase_add_test(tc_ceil, test_ceil_3);
    tcase_add_test(tc_ceil, test_ceil_4);
    tcase_add_test(tc_ceil, test_ceil_5);
    tcase_add_test(tc_ceil, test_ceil_6);

    suite_add_tcase(s, tc_ceil);
    return s;
}