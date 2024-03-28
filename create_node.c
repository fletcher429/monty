#include "monty.h"
/**
 * create_node - creates a new nodee
 * @n: data in the node
 * Return: new_node
 */

stack_t *create_node(int n)
{
	stack_t *new_node;

	new_node = (stack_t *)malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}
