#include "monty.h"
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
	int j = 0;

	instruction_t i[] = 
	{
		{"push", push},
		{"pall", pall},{"pint",pint},
		{"pop", pop},

		/*{"pall", pall},*/
		{NULL, NULL}


	};

	while (i[j].opcode)
	{
		if (strcmp(opcode, i[j].opcode) == 0)
		{
			i[j].f(stack, line_number);
			return (0);
		}
		j++;

	}
	return (-1);


}
