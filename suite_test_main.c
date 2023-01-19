#include "math_tests.h"

int main() {
    SRunner *sr;

    sr = srunner_create(suite_s21_abs());
    run_test(sr);

    sr = srunner_create(suite_s21_acos());
    run_test(sr);

    sr = srunner_create(suite_s21_asin());
    run_test(sr);

    sr = srunner_create(suite_s21_atan());
    run_test(sr);

    sr = srunner_create(suite_s21_ceil());
    run_test(sr);

    sr = srunner_create(suite_s21_cos());
    run_test(sr);

    sr = srunner_create(suite_s21_exp());
    run_test(sr);

    sr = srunner_create(suite_s21_fabs());
    run_test(sr);

    sr = srunner_create(suite_s21_floor());
    run_test(sr);

    sr = srunner_create(suite_s21_fmod());
    run_test(sr);

    sr = srunner_create(suite_s21_log());
    run_test(sr);

    sr = srunner_create(suite_s21_pow());
    run_test(sr);

    sr = srunner_create(suite_s21_sin());
    run_test(sr);

    sr = srunner_create(suite_s21_sqrt());
    run_test(sr);

    sr = srunner_create(suite_s21_tan());
    run_test(sr);

    return 0;
}

int run_test(SRunner *sr) {
    int number_failed;

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}