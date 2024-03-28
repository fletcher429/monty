#include "monty.h"
/**
 * execute - executes the opcode
 * @stack: stack to be operated on
 * @opcode: the opcode instruction
 * @line_number: where the opcode function was found
 */
int execute(stack_t **stack, char *opcode, unsigned int line_number)
{
	int execute_op = 0;


	execute_op = get_opc(stack, opcode, line_number);

	if (execute_op == -1)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		return (-1);
	}
	return (0);
}
