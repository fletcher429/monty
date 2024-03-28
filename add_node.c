#include "monty.h"
/**
 * add_node - adds a new node to the stack
 * @stack: stack where the new node is added
 * @value: value of the node
 * Return: new_node
 */
stack_t *add_node(stack_t **stack, int value)
{
    stack_t *new_node;

    if (!stack)
        return NULL;

    new_node = create_node(value);

    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed");
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
    {
        new_node->next = NULL;
    }

    *stack = new_node;
    return new_node;
}
