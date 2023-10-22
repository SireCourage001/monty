#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the head_stack
 * @head_stack: head_stack
 * @counter_numb: Line number of file to execute
 *
 * Return: void
 */
void pstr(stack_t **head_stack, unsigned int counter_numb)
{
	stack_t *tmpr;
	int num_counter;
	(void) *head_stack;
	(void) counter_numb;

	tmpr = file_ptr->head;
	num_counter = 0;
	if (tmpr == NULL)
	{
		printf("\n");
	}
	else
	{
		while (tmpr != NULL)
		{
			if (!(tmpr->n >= 65 && tmpr->n <= 90)
					&& !(tmpr->n >= 97 && tmpr->n <= 122))
			{
				if (num_counter == 0)
					break;
				printf("\n");
				break;
			}
			else
			{
				printf("%c", tmpr->n);

				if (tmpr->next == NULL)
					printf("\n");
			}
			tmpr = tmpr->next;
			num_counter++;
		}
	}
}
