#include "monty.h"
/**
 * pall - prints elememts on a stack
 * @stack: stack printed
 * line_number - line of pall
 * Return void
 */
void pall(stack_t **stack, unsigned int line_number)
{

	stack_t *current = *stack;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
        return;
	while (current != NULL)
	{
		fprintf(stdout, "%d\n", current->n);
		current = current->next;
	}
}
