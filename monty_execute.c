#include "monty.h"
/**
* execute – Opcode will be executed finished
* @stack: Stack head is showing it is the one
* @counter: counter lines
* @file: file to be executed in line
* @content: line count to be detected
* Return: Nothing will be returned
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t array_check[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int initial = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (array_check[initial].opcode && op)
	{
		if (strcmp(op, array_check[initial].opcode) == 0)
		{	array_check[initial].f(stack, counter);
			return (0);
		}
		initial++;
	}
	if (op && array_check[initial].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

