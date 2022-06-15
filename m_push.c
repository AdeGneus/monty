#include "monty.h"
/**
 *
 */
void push(int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return;
	new->n = n;

	if (top == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		top = new;
	}
	new->next = top;
	top->prev = new;
	new->prev = NULL;
	top = new;
}
