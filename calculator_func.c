#include "monty.h"

/**
 * add_func - function that adds the first two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: error line number
 *
 * Return: void
 */
void add_func(stack_t **stack, unsigned int line_number)
{
	int a, b, sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;
	sum = a + b;

	pop(stack, line_number);

	(*stack)->n = sum;
}

/**
 * sub_func - function subtracts the top element of stack from the second
 * element of stack
 * @stack: pointer to the top of stack
 * @line_number: error line number
 * Return: void
 */
void sub_func(stack_t **stack, unsigned int line_number)
{
	int a, b, diff;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;
	diff = b - a;
	pop(stack, line_number);
	(*stack)->n = diff;
}


/**
 * div_func - function divides the second top elements of the stack by the
 * top element of the stack
 * @stack: pointer to top of stack
 * @line_number: error line number
 * Return: void
 */
void div_func(stack_t **stack, unsigned int line_number)
{
	int a, b, divide;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	
	if (a == 0)
	{
		fprintf(stderr, "L%u: division by zero\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	divide = b / a;

	pop(stack, line_number);
	(*stack)->n = divide;
}


/**
 * mul_func - multiplies the second top element of stack with
 * the top element of stack
 * @stack: pointer to top stack
 * @line_number: error line number
 * Return: void
 */
void mul_func(stack_t **stack, unsigned int line_number)
{
	int a, b, multiple;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	multiple = b * a;
	pop(stack, line_number);
	(*stack)->n = multiple;
}


/**
 * mod_func - computes the rest of th division of the second top element
 * of the stack by the top element of the stack
 * @stack: pointer to top stack
 * @line_number: error line number
 * Return: void
 */
void mod_func(stack_t **stack, unsigned int line_number)
{
	int a, b, modulo;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	{
		fprintf(stderr, "L%u: division by zero\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	modulo = b % a;
	pop(stack, line_number);
	(*stack)->n = modulo;
}
