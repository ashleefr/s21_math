GCC = gcc -Wall -Werror -Wextra
FILES = s21_*.c
OBJ_FILES = s21_*.o
FLAG_O = -o s21_math
FLAG_C = -c
CLEAN_FILES = $(OBJ_FILES) *.out *.a

all: clean

clean:
	rm -rf $(CLEAN_FILES)

test:

s21_math.a:
	$(GCC) $(FLAG_C) $(FILES)
	ar r s21_math.a $(OBJ_FILES)
	rm $(OBJ_FILES)

gcov_report: