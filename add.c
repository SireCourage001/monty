#include "monty.h"

/**
 * count_stacks - Counts number of elements on the head_stack
 * @head_stack: head_stack
 *
 * Return: Num of elements in head_stack
 */

int count_stacks(stack_t *head_stack)
{
	stack_t *temp = head_stack;
	int ind;

	if (temp == NULL)
		return (0);
	ind = 1;
	while (temp->next != NULL)
	{
		temp = temp->next;
		ind++;
	}
	return (ind);
}

/**
 * add - Adds the top 1st & 2nd elements of the head_stack
 * @head_stack: head_stack
 * @counter_numb: Line num of file to execute
 *
 * Return: Void
 */
void add(stack_t **head_stack, unsigned int counter_numb)
{
	int frval_1, frval_2;
	stack_t *temp;
	(void) *head_stack;

	temp = file_ptr->head;
	if (temp == NULL || count_stacks(file_ptr->head) < 2)
	{
		fprintf(stderr, "L%d: can't add, head_stack too short\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	frval_1 = temp->n;
	temp = temp->next;
	frval_2 = temp->n;
	temp->n = frval_1 + frval_2;

	free(file_ptr->head);
	temp->prev = NULL;
	file_ptr->head = temp;
}
