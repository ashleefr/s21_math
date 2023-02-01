GCC = gcc -Wall -Werror -Wextra -std=c11
FLAG_O_TEST = -o s21_test
FLAG_C = -c
FLAG_GCOV = --coverage

CLEAN_FILES = *.o *.out *.a *.gcno *.gcda test *.html *.gcov *.css
C_FILES = ./functions/s21_*.c ./functions/support_functions.c
OBJ_FILES = s21_*.o support_functions.o
TEST_FILES_C = ./testing/suite_*.c
TEST_FILES_O = suite_*.o
GCOV_FILES = *.gcda

all: clean s21_math.a

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
	./test

gcov_report: test
	gcov $(GCOV_FILES)
	gcovr --html-details -o report.html
	rm -rf *.o *.gcda *.gcno *.gcov

work: clean
	$(GCC) $(C_FILES) ./functions/work_main.c -o s21_work_main.out

style_test: clean
	clang-format -n *.c *.h