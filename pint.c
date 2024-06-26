#include "monty.h"
/**
 * pint - prints element on top of the stack
 * @stack: stack to be printed
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit (EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);

}
