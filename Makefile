GCC = gcc -Wall -Werror -Wextra -std=c11
C_FILES = s21_*.c support_functions.c
OBJ_FILES = s21_*.o
FLAG_O_TEST = -o s21_test
FLAG_C = -c
FLAG_GCOV = --coverage
CLEAN_FILES = *.o *.out *.a *.gcno *.gcda test
TEST_FILES_C = suite_s21_abs.c
TEST_FILES_O = suite_s21_abs.o

all: clean

clean:
	rm -rf $(CLEAN_FILES)

s21_math.a:
	$(GCC) $(FLAG_C) $(C_FILES)
	ar rc s21_math.a $(OBJ_FILES)
	ranlib s21_math.a
	rm $(OBJ_FILES)

test: clean s21_math.a
	$(GCC) $(FLAG_C) $(TEST_FILES_C) -lcheck -lsubunit
	ar rc suite_tests.a $(TEST_FILES_O)
	ranlib suite_tests.a
	$(GCC) $(FLAG_GCOV) $(FLAG_O) s21_math.a suite_tests.a $(C_FILES) -lcheck -o test


gcov_report:

work: clean
	$(GCC) $(C_FILES) work_main.c -o s21_work_main.out