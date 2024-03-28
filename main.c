#include "monty.h"

/**
 * main - Entry point of the Monty program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	/* Variables */
	char *opcode;
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;

		/* Execute opcode */
		opcode = strtok(line, " \t\n");
		if (opcode != NULL && opcode[0] != '#')
			execute(&stack, opcode, line_number);
	}

	free(line);
	fclose(file);
	free_s(&stack);
	return (EXIT_SUCCESS);
}
