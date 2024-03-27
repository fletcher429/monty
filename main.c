#include "monty.h"
/**
 * main - the entry point of the program
 * @argc: the argument counter
 * @argv: the argument passed
 */
int main(int argc, char *argv[])
{
	FILE *file; /* Pointer var used to represent the file file stream*/
	char *line = NULL; /* Used to store each line read by the getline() function*/
	ssize_t values_read; /* Used to store the return value of the getline function*/
	stack_t *stack = NULL; /* The struct data structure*/
	unsigned int line_number = 0; /*keeping track of the cureent line of the the file*/
	size_t len = 0; /* Stores the len of the of each line read by getline()*/
	char *op_func; /* a pointer variable to store the opcode instructions*/

	if (argc =! 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}

	file = fopen(argv[1], "r") /*open the file for read only*/

	if (file == NULL)
	{
		fprintf(stderr, " Error: Can't open file <file>\n")
		exit(EXIT_FAILURE);
	}

	while ((values_read = getline(&line, &line, file)) != -1)
	{
		/**
		 * perform the opcode functions
		*/

	}

	free(line);
	fclose(file);
	/*Free the stack - do not forget that*/
	return (EXIT_SUCCESS);




}
