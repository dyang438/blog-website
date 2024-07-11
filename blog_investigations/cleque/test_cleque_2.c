#include <stdio.h>
#include <string.h>
#include <time.h>

#include "cleque_ptr.h"

#define TEST_SIZE 100000000

int main () {
	static int input [TEST_SIZE];
	srand(time(NULL));
	for (int i = 0; i < TEST_SIZE; i++) input[i] = i;

	int size = sizeof(input)/sizeof(int);
	cleque_ptr* main_cleque = init_cleque_ptr(input, size);
	// TODO: here we add timing:
	
	clock_t start_time = clock();

	for (int i = TEST_SIZE-1; i >= 3; i--) { 
		pop_front(main_cleque);
	}

	clock_t end_time = clock();
	double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
	fprintf(stdout, "Time spent in popping operations: %f seconds\n", time_spent);

	print_all(main_cleque);
}



