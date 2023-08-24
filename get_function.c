#include "monty.h"

/**
 * get_opc - Get the opcode function
 * @stack: Pointer to the stack or queue
 * @opcode: The opcode
 * @line_number: The line number
 *
 * Return: 0 on success, -1 if opcode not found
 */
int get_opc(stack_t **stack, char *opcode, unsigned int line_number)
{
	int i = 0;

	instruction_t op[] = {
		{"push", push}, {"pint", pint}, {"pop", pop},
		{"pall", pall}, {"swap", swap}, {"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (strcmp(opcode, op[i].opcode) == 0)
		{
			op[i].f(stack, line_number);
			return (0); /* Success */
		}
		i++;
	}

	return (-1); /* Opcode not found */
}
