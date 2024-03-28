#include "monty.h"
/**
 * push - push an element to the stack"
 * @stack - stack being operated on'
 * @line_number - line no where opcode function is encountered
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *value = strtok(NULL, " \t\n");

	int value_1;

	if (!value || !isdigit(*value))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value_1 = atoi(value);
	add_node(stack, value_1);


}
