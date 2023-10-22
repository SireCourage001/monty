#include "monty.h"

/**
 * get_opcode_func - It handles the opcode function been passed
 *
 * Description: Checks if the opcode string is valid
 */

void get_opcode_func(void)
{
	size_t index_i;

	static instruction_t opcodes[] = {
		{"push", push}, {"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"swap", swap},
		{"nop", nop},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	if (file_ptr->num_tokens == 0)
		return;
	if (file_ptr->tokens[0][0] == '#')
	{
		handle_hash();
		break;
	}
	for (index_i = 0; opcodes[index_i].opcode != NULL; index_i++)
	{
		if (strcmp(opcodes[index_i].opcode, file_ptr->tokens[0]) == 0)
		{
			file_ptr->opcode_instruction->opcode = opcodes[index_i].opcode;
			file_ptr->opcode_instruction->f = opcodes[index_i].f;
			break;
		}
	}
	invalid_instruction();
}


/**
 * invalid_instruction - Handles the error message
 *
 * Description: Frees invaild functions
 */

void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			file_ptr->counter_numb, file_ptr->tokens[0]);
	fclose_file();
	free_tokens();
	free_file_ptr();
	exit(EXIT_FAILURE);
}

/**
 * fclose_file - Closes the file
 */

void fclose_file(void)
{
	if (file_ptr->file != NULL)
	{
		fclose(file_ptr->file);
	}
	file_ptr->file = NULL;
}

/**
 * free_tokens - Frees all the tokenized string
 */

void free_tokens(void)
{
	int index_i = 0;

	if (file_ptr->tokens == NULL)
		return;
	while (file_ptr->tokens[index_i])
	{
		free(file_ptr->tokens[index_i]);
		index_i++;
	}
	free(file_ptr->tokens);
	file_ptr->tokens = NULL;
}

/**
 * free_file_ptr - Free the file_ptr the pointer to the struct
 */

void free_file_ptr(void)
{
	if (file_ptr == NULL)
		return;
	if (file_ptr->opcode_instruction)
	{
		free(file_ptr->opcode_instruction);
		file_ptr->opcode_instruction = NULL;
	}
	free_head();
	if (file_ptr->line)
	{
		free(file_ptr->line);
		file_ptr->line = NULL;
	}
	free(file_ptr);
}
