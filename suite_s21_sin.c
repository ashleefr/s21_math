#include "math_tests.h"

START_TEST(test_sin_1) {
        ck_assert_ldouble_eq_tol(s21_sin(0.), sin(0.), S21_CHECK);
} END_TEST

START_TEST(test_sin_2) {
    ck_assert_ldouble_eq_tol(s21_sin(2 * S21_PI), sin(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_sin_3) {
    ck_assert_ldouble_eq_tol(s21_sin(1.), sin(1.), S21_CHECK);
} END_TEST

START_TEST(test_sin_4) {
    ck_assert_ldouble_eq_tol(s21_sin(-1.), sin(-1.), S21_CHECK);
} END_TEST

START_TEST(test_sin_5) {
    ck_assert_ldouble_eq_tol(s21_sin(0.5), sin(0.5), S21_CHECK);
} END_TEST

START_TEST(test_sin_6) {
    ck_assert_ldouble_eq_tol(s21_sin(-0.5), sin(-0.5), S21_CHECK);
} END_TEST

        Suite *suite_s21_sin(void) {
    Suite *s;
    TCase *tc_sin;

    s = suite_create("S21_sin");
    tc_sin = tcase_create("S21_sin");

    tcase_add_test(tc_sin, test_sin_1);
    tcase_add_test(tc_sin, test_sin_2);
    tcase_add_test(tc_sin, test_sin_3);
    tcase_add_test(tc_sin, test_sin_4);
    tcase_add_test(tc_sin, test_sin_5);
    tcase_add_test(tc_sin, test_sin_6);

    suite_add_tcase(s, tc_sin);
    return s;
}