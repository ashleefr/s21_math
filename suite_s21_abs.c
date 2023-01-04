#include "math_tests.h"

START_TEST(test_abs_1) {
    ck_assert_int_eq(s21_abs(21), abs(21));
} END_TEST

Suite *suite_s21_abs(void) {
    Suite *s;
    TCase *tc_abs;

    s = suite_create("S21_abs");
    tc_abs = tcase_create("S21_abs");

    tcase_add_test(tc_abs, test_abs_1);

    suite_add_tcase(s, tc_abs);
    return s;
}

int main() {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = suite_create("S");
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);

    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}