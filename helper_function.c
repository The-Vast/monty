#include "monty.h"

/**
 * _isdigit - checks for a digit
 * @str: string
 *
 * Return: 0 means NO digit, 1 means there IS digit
 */
int _isdigit(char *str)
{
	int i;

	if (str[0] == '-')
		i = 1;
	else
		i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}

	return (1);
}


/**
 * dropnl - function that removes the newline at the end of a string
 * @src: source string
 *
 * Return: void
 */
void dropnl(char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		if (src[i] == '\n')
		{
			*(src + i) = '\0';
			return;
		}
	}
}

/**
 * free_dataStructure - function that frees a data structure
 *
 * Return: void
 */
void free_dataStructure(void)
{
	stack_t *tmp1, *tmp2 = NULL;

	tmp1 = *(GLOBAL_var.top);

	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
}

/**
 * free_fp_line - function that frees the file pointer and line
 *
 * Return: void
 */
void free_fp_line(void)
{
	fclose(GLOBAL_var.fp);

	if (GLOBAL_var.line)
		free(GLOBAL_var.line);
}

/**
 * do_nop - opcode that does nothing
 * @stack: pointer to stack
 * @line_number: line number
 *
 * Return: void
 */
void do_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}