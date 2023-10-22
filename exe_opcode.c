#include "monty.h"

/**
 * execute_opcode - Handles the execution if a valid command is passed
 */

void execute_opcode(void)
{
	stack_t *head_stack = NULL;

	if (file_ptr->opcode_instruction->f)
	{
		file_ptr->opcode_instruction->f(&head_stack,
				file_ptr->counter_numb);
	}
	else
		invalid_instruction();
}
