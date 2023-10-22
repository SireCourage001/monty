#include "monty.h"

/**
 * pchar - Prints the char at the top of the head_stack
 * @head_stack: head_stack
 * @counter_numb: Line number of file to execute
 *
 * Return: void
 */
void pchar(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *temp;
	(void) *head_stack;

	temp = file_ptr->head;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, head_stack empty\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	if ((temp->n >= 'A' && temp->n <= 'Z') || (temp->n >= 'a' && temp->n <= 'z'))
		printf("%c\n", temp->n);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}
}
