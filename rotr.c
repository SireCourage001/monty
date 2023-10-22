#include "monty.h"

/**
 * rotr - Rotates the head_stack to the bottom, making the
 * last element the first and leaving the rest intact
 *
 * @head_stack: head_stack
 * @counter_numb: Line num of file to execute
 *
 * Return: void
 */
void rotr(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *temp, *main_current;
	(void) *head_stack;
	(void) counter_numb;

	temp = file_ptr->head;
	if (count_stacks(file_ptr->head) < 2)
	{
		return;
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			main_current = temp;
			break;
		}
		temp = temp->next;
	}
	main_current->prev->next = NULL;
	main_current->next = file_ptr->head;
	main_current->prev = NULL;
	file_ptr->head = main_current;
}
