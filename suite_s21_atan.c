#include "math_tests.h"

START_TEST(test_atan_1) {
        ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), S21_CHECK);
} END_TEST

START_TEST(test_atan_2) {
    ck_assert_ldouble_eq_tol(s21_atan(2 * S21_PI), atan(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_atan_3) {
    ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), S21_CHECK);
} END_TEST

START_TEST(test_atan_4) {
    ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), S21_CHECK);
} END_TEST

START_TEST(test_atan_5) {
    ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), S21_CHECK);
} END_TEST

START_TEST(test_atan_6) {
    ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), S21_CHECK);
} END_TEST

Suite *suite_s21_atan(void) {
    Suite *s;
    TCase *tc_atan;

    s = suite_create("S21_atan");
    tc_atan = tcase_create("S21_atan");

    tcase_add_test(tc_atan, test_atan_1);
    tcase_add_test(tc_atan, test_atan_2);
    tcase_add_test(tc_atan, test_atan_3);
    tcase_add_test(tc_atan, test_atan_4);
    tcase_add_test(tc_atan, test_atan_5);
    tcase_add_test(tc_atan, test_atan_6);

    suite_add_tcase(s, tc_atan);
    return s;
}