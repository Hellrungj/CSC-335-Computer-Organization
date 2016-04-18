clean:
	rm -f run_tests

tests: clean
	gcc -g -c bitlib.c
	gcc -o run_tests bitlib.o tests.c 

all: clean tests

