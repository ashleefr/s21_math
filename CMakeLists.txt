cmake_minimum_required(VERSION 3.24)
project(Math C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(s21_math
        s21_abs.c
        s21_acos.c
        s21_asin.c
        s21_atan.c
        s21_ceil.c
        s21_cos.c
        s21_exp.c
        s21_fabs.c
        s21_floor.c
        s21_fmod.c
        s21_log.c
        s21_pow.c
        s21_sin.c
        s21_sqrt.c
        s21_tan.c
        support_functions.c
        work_main.c)
