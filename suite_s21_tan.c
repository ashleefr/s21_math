#include "math_tests.h"

START_TEST(test_tan_1) {
        ck_assert_ldouble_eq_tol(s21_tan(0.), tan(0.), S21_CHECK);
} END_TEST

START_TEST(test_tan_2) {
    ck_assert_ldouble_eq_tol(s21_tan(2 * S21_PI), tan(2 * S21_PI), S21_CHECK);
} END_TEST

START_TEST(test_tan_3) {
    ck_assert_ldouble_eq_tol(s21_tan(1.), tan(1.), S21_CHECK);
} END_TEST

START_TEST(test_tan_4) {
    ck_assert_ldouble_eq_tol(s21_tan(-1.), tan(-1.), S21_CHECK);
} END_TEST

START_TEST(test_tan_5) {
    ck_assert_ldouble_eq_tol(s21_tan(0.5), tan(0.5), S21_CHECK);
} END_TEST

START_TEST(test_tan_6) {
    ck_assert_ldouble_eq_tol(s21_tan(-0.5), tan(-0.5), S21_CHECK);
} END_TEST

        Suite *suite_s21_tan(void) {
    Suite *s;
    TCase *tc_tan;

    s = suite_create("S21_tan");
    tc_tan = tcase_create("S21_tan");

    tcase_add_test(tc_tan, test_tan_1);
    tcase_add_test(tc_tan, test_tan_2);
    tcase_add_test(tc_tan, test_tan_3);
    tcase_add_test(tc_tan, test_tan_4);
    tcase_add_test(tc_tan, test_tan_5);
    tcase_add_test(tc_tan, test_tan_6);

    suite_add_tcase(s, tc_tan);
    return s;
}