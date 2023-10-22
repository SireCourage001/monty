#include "monty.h"

/**
 * mul - Multiplies the second top element head_stack
 * with the top element of the head_stack
 * @head_stack: head_stack
 * @counter_numb: num of file to execute
 *
 * Return: void
 */
void mul(stack_t **head_stack, unsigned int counter_numb)
{
	int fr_valu, snd_valu;
	stack_t *tmpr;
	(void) *head_stack;

	tmpr = file_ptr->head;
	if (tmpr == NULL || count_stacks(file_ptr->head) < 2)
	{
		fprintf(stderr, "L%d: can't mul, head_stack too short\n", counter_numb);
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	fr_valu = tmpr->n;
	tmpr = tmpr->next;
	snd_valu = tmpr->n;
	tmpr->n = snd_valu * fr_valu;

	free(file_ptr->head);
	tmpr->prev = NULL;
	file_ptr->head = tmpr;
}
