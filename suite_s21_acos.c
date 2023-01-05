#include "math_tests.h"

START_TEST(test_acos_1) {
        ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), S21_CHECK);
} END_TEST

START_TEST(test_acos_2) {
    double num = 2 * S21_PI;
    long double orig_res = acos(num), our_res = s21_acos(num);
    int suc = isnan(orig_res) && isnan(our_res) ? 1 : 0;
    ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(test_acos_3) {
    ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), S21_CHECK);
} END_TEST

START_TEST(test_acos_4) {
    ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), S21_CHECK);
} END_TEST

START_TEST(test_acos_5) {
    ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), S21_CHECK);
} END_TEST

START_TEST(test_acos_6) {
    ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), S21_CHECK);
} END_TEST

Suite *suite_s21_acos(void) {
    Suite *s;
    TCase *tc_acos;

    s = suite_create("S21_acos");
    tc_acos = tcase_create("S21_acos");

    tcase_add_test(tc_acos, test_acos_1);
    tcase_add_test(tc_acos, test_acos_2);
    tcase_add_test(tc_acos, test_acos_3);
    tcase_add_test(tc_acos, test_acos_4);
    tcase_add_test(tc_acos, test_acos_5);
    tcase_add_test(tc_acos, test_acos_6);

    suite_add_tcase(s, tc_acos);
    return s;
}