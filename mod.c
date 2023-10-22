#include "monty.h"


/**
 * mod - Computes division of the
 * second top element of the head_stack by the top element of the head_stack
 *
 * @head_stack: head_stack
 * @counter_numb: Line num of file to execute
 *
 * Return: NULL.
 */

void mod(stack_t **head_stack, unsigned int counter_numb)
{
	int fr_val_1, fr_val_2;
	stack_t *tmp;
	(void) *head_stack;

	tmp = file_ptr->head;
	if (tmp == NULL || count_stacks(file_ptr->head) < 2)
	{
		fprintf(stderr, "L%d: can't mod, head_stack too short\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}
	fr_val_1 = tmp->n;
	if (fr_val_1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}
	tmp = tmp->next;
	fr_val_2 = tmp->n;
	tmp->n = fr_val_2 % fr_val_1;

	free(file_ptr->head);
	tmp->prev = NULL;
	file_ptr->head = tmp;
}
