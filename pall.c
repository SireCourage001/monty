#include "monty.h"

/**
 * pall - Prints all the values on the head_stack, starting
 * from the top of the head_stack
 * @head_stack: A pointer to the head_stack struct
 * @counter_numb: The num of each line in the file
 */

void pall(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *current;
	(void) head_stack;
	(void) counter_numb;

	current = file_ptr->head;

	if (current == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
