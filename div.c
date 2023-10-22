#include "monty.h"

/**
 * _div - Divides second top element of the head_stack
 * by the top element of the head_stack
 * @head_stack: head_stack
 * @counter_numb: Line num of file to execute
 *
 * Return: Void
 */
void _div(stack_t **head_stack, unsigned int counter_numb)
{
	int frval_1, frval_2;
	stack_t *temp;
	(void) *head_stack;

	temp = file_ptr->head;
	if (temp == NULL || count_stacks(file_ptr->head) < 2)
	{
		fprintf(stderr, "L%d: can't div, head_stack too short\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	frval_1 = temp->n;
	if (frval_1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}
	temp = temp->next;
	frval_2 = temp->n;
	temp->n = frval_2 / frval_1;

	free(file_ptr->head);
	temp->prev = NULL;
	file_ptr->head = temp;
}
