#include "math_tests.h"

START_TEST(test_abs_1) {
    ck_assert_int_eq(s21_abs(0), abs(0));
} END_TEST

START_TEST(test_abs_2) {
    ck_assert_int_eq(s21_abs(-0), abs(-0));
} END_TEST

START_TEST(test_abs_3) {
    ck_assert_int_eq(s21_abs(1), abs(1));
} END_TEST

START_TEST(test_abs_4) {
    ck_assert_int_eq(s21_abs(-1), abs(-1));
} END_TEST

START_TEST(test_abs_5) {
    ck_assert_int_eq(s21_abs(2147483647), abs(2147483647));
} END_TEST

START_TEST(test_abs_6) {
    ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
} END_TEST

Suite *suite_s21_abs(void) {
    Suite *s;
    TCase *tc_abs;

    s = suite_create("S21_abs");
    tc_abs = tcase_create("S21_abs");

    tcase_add_test(tc_abs, test_abs_1);
    tcase_add_test(tc_abs, test_abs_2);
    tcase_add_test(tc_abs, test_abs_3);
    tcase_add_test(tc_abs, test_abs_4);
    tcase_add_test(tc_abs, test_abs_5);
    tcase_add_test(tc_abs, test_abs_6);

    suite_add_tcase(s, tc_abs);
    return s;
}