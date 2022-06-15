#include "monty.h"
/**
 *
 */
void print()
{
	while (top != NULL)
	{
		printf("%i\n", top->n);
		top = top->next;
	}
}
