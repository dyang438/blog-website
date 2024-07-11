#include <stdio.h>
#include <string.h>

#include "cleque_ptr.h"

int main () {
	static int input [3] = {0, 1, 2};
	int size = sizeof(input)/sizeof(int);
	cleque_ptr* main_cleque = init_cleque_ptr(input, size);
	// TODO: Here we add timing:
	print_all(main_cleque);
	int deg = pop_at(main_cleque, 3);
	fprintf(stdout, "%d\n", deg);
	print_all(main_cleque);
}



