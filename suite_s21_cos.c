#include "math_tests.h"

START_TEST(test_cos_1) {
        ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), S21_CHECK);
} END_TEST

START_TEST(test_cos_2) {
    ck_assert_ldouble_eq_tol(s21_cos(2 * S21_PI), cos(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_cos_3) {
    ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), S21_CHECK);
} END_TEST

START_TEST(test_cos_4) {
    ck_assert_ldouble_eq_tol(s21_cos(-1), cos(-1), S21_CHECK);
} END_TEST

START_TEST(test_cos_5) {
    ck_assert_ldouble_eq_tol(s21_cos(0.5), cos(0.5), S21_CHECK);
} END_TEST

START_TEST(test_cos_6) {
    ck_assert_ldouble_eq_tol(s21_cos(-0.5), cos(-0.5), S21_CHECK);
} END_TEST

START_TEST(test_cos_7) {
    ck_assert_ldouble_eq_tol(s21_cos(8.5), cos(8.5), S21_CHECK);
} END_TEST

START_TEST(test_cos_8) {
    ck_assert_ldouble_eq_tol(s21_cos(-6.5), cos(-6.5), S21_CHECK);
} END_TEST

Suite *suite_s21_cos(void) {
    Suite *s;
    TCase *tc_cos;

    s = suite_create("S21_cos");
    tc_cos = tcase_create("S21_cos");

    tcase_add_test(tc_cos, test_cos_1);
    tcase_add_test(tc_cos, test_cos_2);
    tcase_add_test(tc_cos, test_cos_3);
    tcase_add_test(tc_cos, test_cos_4);
    tcase_add_test(tc_cos, test_cos_5);
    tcase_add_test(tc_cos, test_cos_6);
    tcase_add_test(tc_cos, test_cos_7);
    tcase_add_test(tc_cos, test_cos_8);

    suite_add_tcase(s, tc_cos);
    return s;
}