#include "monty.h"
/**
 * swap - swap the first and second node
 * @stack: stack to be operated on
 * @line_number: line of opcode
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = first->next;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_number);
	}
	first->next = second->next;

	if (second->next != NULL)
	{
		second->next->prev = first;
	}
	second->prev = NULL;
	second->next = first;
	first->prev = second;

	*stack = second;
}
