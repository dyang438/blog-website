#include <stdio.h>
#include <stdlib.h>
#include "deque.h"


deque* init_deque (int* array, int size) 
// Invariant is that array == size, common usage wouldn't have either have values, so default is (NULL, 0) as args
{
	deque* ret_deque = malloc(sizeof(deque));
	if (!ret_deque) 
	{
		fprintf(stderr, "call to malloc failed on deque");
	}

	if (!array) 
	{
		ret_deque->first = NULL;
		ret_deque->last = NULL;
		return ret_deque;
	}
	
	deque_node* head = malloc(sizeof(deque_node));
	if (!head)
	{
		fprintf(stderr, "call to malloc failed on deque_node");
	}
	head->payload = array[0];
	ret_deque->first = head;
	deque_node* iter = head;
	for (int i = 1; i < size; i++) 
	{
		deque_node* new = malloc(sizeof(deque_node));
		iter->next = new;
		new->payload = array[i];
		new->next = NULL;
		new->prev = iter;
		iter = iter->next;
	}	
	iter->next = head;
	ret_deque->last = iter;

	fprintf(stderr, "first: %d", ret_deque->first->payload);
	fprintf(stderr, "last: %d", ret_deque->last->payload);

	return ret_deque;
}


int deque_pop_front (deque* input)
{
	int ret = input->first->payload;
	input->first->next->prev = input->last;
	input->last->next = input->first->next;
	input->first = input->first->next;
	return ret;
}


void print_deque (deque* input) 
{
	fprintf(stdout, "[");

	deque_node* iter = input->first;
	deque_node* last = input->last;
	while (iter != last) 
	{
		fprintf(stdout, "%d, ", iter->payload);
		iter = iter->next;
	}
	fprintf(stdout, "%d", iter->payload);
	fprintf(stdout, "]");
}
