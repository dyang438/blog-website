#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


typedef struct deque_node 
{
	int payload;
	struct deque_node* next;
	struct deque_node* prev;
} 
deque_node;


typedef struct deque
{
	struct deque_node* first;
	struct deque_node* last;
}
deque;


deque* init_deque (int* array, int size);

int deque_pop_front (deque* input);

void print_deque(deque* input);
