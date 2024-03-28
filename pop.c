#include "monty.h"
/**
 * pop - Removes the top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 */

void pop(stack_t **stack, unsigned int line_number) {
  stack_t *temp;

  if (*stack == NULL) {  // Check for empty stack using short-circuit evaluation
    fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
    exit(EXIT_FAILURE);
  }

  temp = *stack;
  *stack = temp->next;
  if (*stack) {
    (*stack)->prev = NULL;
  }
  free(temp);
}
