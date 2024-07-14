#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

#define TEST_SIZE 10

int main () 
{
	int input [TEST_SIZE];
	for (int i = 0; i < TEST_SIZE; i++) 
	{
		input[i] = i;
	}

	deque* deque_1 = init_deque(input, TEST_SIZE);
	print_deque(deque_1); 
	

}
