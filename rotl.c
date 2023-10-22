#include "monty.h"

/**
 * rotl - Rotates the head_stack to the top, putting first
 * element at the end and leaving the rest intact
 *
 * @head_stack: head_stack
 * @counter_numb: Line num of file to execute
 *
 * Return: void
 */
void rotl(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *tempr, *the_current;
	(void) *head_stack;
	(void) counter_numb;

	if (count_stacks(file_ptr->head) < 2)
	{
		return;
	}

	tempr = file_ptr->head;
	the_current = tempr->next;
	file_ptr->head = the_current;
	while (the_current != NULL)
	{
		if (the_current->next == NULL)
		{
			the_current->next = tempr;
			tempr->next = NULL;
			tempr->prev = the_current;
			break;
		}
		the_current = the_current->next;
	}
}
