#include <stdio.h>
#include <string.h>
#include <time.h>

#include "cleque_ptr.h"

#define TEST_SIZE 100000000

int test_one_ptr(int test_size, cleque_ptr* main_cleque);

int test_two_ptr(int test_size, cleque_ptr* main_cleque);


int main () 
{
	static int input [TEST_SIZE];
	srand(time(NULL));
	for (int i = 0; i < TEST_SIZE; i++) input[i] = i;
	int size = sizeof(input)/sizeof(int);

	cleque_ptr* main_cleque = init_cleque_ptr(input, size);

	test_one_ptr(TEST_SIZE, main_cleque);

	// reset the main_cleque
	for (int i = 0; i < TEST_SIZE; i++) input[i] = i;

	test_two_ptr(TEST_SIZE, main_cleque);

	free(main_cleque);
}

int test_one_ptr (int test_size, cleque_ptr* main_cleque) 
{
	clock_t start_time = clock();
	for (int i = test_size-1; i >= 3; i--) { 
		pop_back(main_cleque);
	}	

	clock_t end_time = clock();
	double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
	fprintf(stdout, "Time spent in popping operations: %f seconds\n", time_spent);

	print_all(main_cleque);
	if (main_cleque->adjusted_len == 3) {
		fprintf(stderr, "Test 1 Passed!");
		return 1;
	}
	fprintf(stderr, "Test 1 Failed");
	return 0;
}

int test_two_ptr (int test_size, cleque_ptr* main_cleque) 
{
	clock_t start_time_2 = clock();

	for (int i = TEST_SIZE-1; i >= 3; i--) { 
		pop_front(main_cleque);
	}

	clock_t end_time_2 = clock();
	double time_spent_2 = (double)(end_time_2 - start_time_2) / CLOCKS_PER_SEC;
	fprintf(stdout, "Time spent in popping operations: %f seconds\n", time_spent_2);

	print_all(main_cleque);
	if (main_cleque->adjusted_len == 3) {
		fprintf(stderr, "Test 2 Passed!");
		return 1;
	}
	fprintf(stderr, "Test 2 Failed");
	return 0;
}

