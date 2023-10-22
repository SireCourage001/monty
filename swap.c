#include "monty.h"

/**
 * swap - Swaps the values top 2 elements on the head_stack, starting
 * from the top of the head_stack
 * @head_stack: A pointer to the head_stack struct
 * @counter_numb: the Line num of each line in the file
 */

void swap(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *tmp_ptr = NULL;
	int temp_value;

	(void) *head_stack;
	if (file_ptr->head == NULL || file_ptr->head->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, head_stack too short\n", counter_numb);
		fclose_file();
		free_tokens();
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	tmp_ptr = file_ptr->head;
	temp_value = tmp_ptr->n;
	tmp_ptr->n = tmp_ptr->next->n;
	tmp_ptr->next->n = temp_value;
}
