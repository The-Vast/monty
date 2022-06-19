#include "monty.h"

/**
 * no_op - opcode that does nothing
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void no_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
