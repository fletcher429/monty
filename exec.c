#include "monty.h"

/**
 * execute_opcode - Executes the opcode function
 * @opcode: The opcode
 * @stack: Pointer to the stack or queue
 * @line_number: The line number
 *
 * Return: 0 on success, -1 if opcode not found
 */
int execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	int result = get_opc(stack, opcode, line_number);

	if (result == -1)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		return (-1);
	}

	return (0);
}
