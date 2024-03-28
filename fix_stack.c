#include "monty.h"
/**
 * clear - cleans the stack
 * @stack - double ptr to the top of the stack
 * Return: void
 */
void clear(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *tmp;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*stack = NULL;
}
