#include "monty.h"

/**
 * create_node - Creates a new node with the given value
 * @n: The value to be stored in the node
 * Return: A pointer to the newly created node, or NULL on failure
 */
stack_t *create_node(int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * clear_stack - Clears all the elements in the stack
 * @stack: Double pointer to the top of the stack
 */
void clear_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*stack = NULL;
}

/**
 * free_stack - Frees the memory allocated for the stack
 * @stack: Double pointer to the top of the stack
 */
void free_stack(stack_t **stack)
{
	clear_stack(stack);
}
#include "monty.h"

/**
 * add_node - Adds a new node at the beginning of a stack.
 * @stack: Double pointer to the head of the stack.
 * @value: Value to be stored in the new node.
 * Return: Pointer to the newly created node.
 */
stack_t *add_node(stack_t **stack, int value)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
		new_node->next = NULL;

	*stack = new_node;
	return (new_node);
}
