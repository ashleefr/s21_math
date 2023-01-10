#include "math_tests.h"

START_TEST(test_log_1) {
        ck_assert_ldouble_eq_tol(s21_log(0.), log(0.), S21_CHECK);
} END_TEST

START_TEST(test_log_2) {
    ck_assert_ldouble_eq_tol(s21_log(2 * S21_PI), log(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_log_3) {
    ck_assert_ldouble_eq_tol(s21_log(1.), log(1.), S21_CHECK);
} END_TEST

START_TEST(test_log_4) {
    ck_assert_ldouble_nan(s21_log(-1.));
    ck_assert_ldouble_nan(log(-1.));
} END_TEST

START_TEST(test_log_5) {
    ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), S21_CHECK);
} END_TEST

START_TEST(test_log_6) {
    ck_assert_ldouble_nan(s21_log(-0.5));
    ck_assert_ldouble_nan(log(-0.5));
} END_TEST

START_TEST(test_log_7) {
    ck_assert_ldouble_infinite(s21_log(S21_INF));
    ck_assert_ldouble_infinite(log(S21_INF));
} END_TEST

START_TEST(test_log_8) {
    ck_assert_ldouble_eq_tol(s21_log(0.0), log(0.0), S21_CHECK);
} END_TEST

        Suite *suite_s21_log(void) {
    Suite *s;
    TCase *tc_log;

    s = suite_create("S21_log");
    tc_log = tcase_create("S21_log");

    tcase_add_test(tc_log, test_log_1);
    tcase_add_test(tc_log, test_log_2);
    tcase_add_test(tc_log, test_log_3);
    tcase_add_test(tc_log, test_log_4);
    tcase_add_test(tc_log, test_log_5);
    tcase_add_test(tc_log, test_log_6);
    tcase_add_test(tc_log, test_log_7);
    tcase_add_test(tc_log, test_log_8);

    suite_add_tcase(s, tc_log);
    return s;
}