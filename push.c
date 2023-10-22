#include "monty.h"

/**
 * push - Prints all the values on the head_stack, starting
 * from the top of the head_stack
 * @head_stack: A pointer to the head_stack struct
 * @counter_numb: The line num of each line in the file
 */

void push(stack_t **head_stack, unsigned int counter_numb)
{
	if (file_ptr->num_tokens <= 1 || !(check_digit_(file_ptr->tokens[1])))
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter_numb);
		fclose_file();
		free_tokens();
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	*head_stack = malloc(sizeof(stack_t));
	if (*head_stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose_file();
		free_tokens();
		free_file_ptr();
		exit(EXIT_FAILURE);
	}

	(*head_stack)->next = (*head_stack)->prev = NULL;
	(*head_stack)->n = (int) atoi(file_ptr->tokens[1]);
	if (file_ptr->head != NULL)
	{
		(*head_stack)->next = file_ptr->head;
		file_ptr->head->prev = *head_stack;
	}
	file_ptr->head = *head_stack;
}
/**
 * check_digit_ - Checks if a string is a digit
 * @str:The string to check
 * Return: 0 on success
 */

int check_digit_(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * free_stack - handles the free of all the stacks created
 * @head: a pointer to the head of the node
 */

void free_stack(stack_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}



void free_head(void)
{
	if (file_ptr->head)
		free_stack(file_ptr->head);
	file_ptr->head = NULL;
}
