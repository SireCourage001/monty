#include "monty.h"

/**
 * pop - Prints all the values on the head_stack, starting
 * from the top of the head_stack
 * @head_stack: A pointer to the head_stack struct
 * @counter_numb: The line num of each line in the file
 */

void pop(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *tmpr = NULL;
	(void) *head_stack;

	tmpr = file_ptr->head;
	if (tmpr == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty head_stack\n", counter_numb);
		fclose_file();
		free_tokens();
		free_file_ptr();
		exit(EXIT_FAILURE);
	}
	file_ptr->head = tmpr->next;
	if (file_ptr->head != NULL)
	{
		file_ptr->head->prev = NULL;
	}
	free(tmpr);
}
