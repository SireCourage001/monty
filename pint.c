#include "monty.h"

/**
 * pint - Prints the value at the top of the head_stack
 *
 * @head_stack: A pointer to the head_stack struct
 * @counter_numb: The line num of each line in the file
 */

void pint(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *the_current;
	(void) *head_stack;

	the_current = file_ptr->head;
	if (the_current == NULL)
	{
		fprintf(stderr, "L%d: can't pint, head_stack empty\n", counter_numb);
		fclose_file();
		free_tokens();
		free_file_ptr();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", the_current->n);
}
