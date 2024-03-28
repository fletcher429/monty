#include "monty.h"
/**
 * pop - remove top element of the stack
 * @stack: stack operated
 * @line_number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	
	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u<line_number>: can't add, stack too short\n", line_number);
	}
	if ((*stack)->next == NULL)
	{
		*stack = NULL;
	}
	else
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
	}
	free(tmp);
}
