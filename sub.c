#include "monty.h"

/**
 * sub - Subtracts top element of head_stack from
 * second top element of the head_stack
 *
 * @head_stack: head_stack
 * @counter_numb: Line num of file to execute
 *
 * Return: void
 */
void sub(stack_t **head_stack, unsigned int counter_numb)
{
	int val_one, val_two;
	stack_t *temp;
	(void) *head_stack;

	temp = file_ptr->head;
	if (temp == NULL || count_stacks(file_ptr->head) < 2)
	{
		fprintf(stderr, "L%d: can't sub, head_stack too short\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	val_one = temp->n;
	temp = temp->next;
	val_two = temp->n;
	temp->n = val_two - val_one;

	free(file_ptr->head);
	temp->prev = NULL;
	file_ptr->head = temp;
}
