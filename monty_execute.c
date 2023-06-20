#include "monty.h"
/**
* execute – code to be ran
* @stack: number 1 on list
* @counter: counts lines of the number
* @file: file to be checked
* @content: content to be analyzed
* Return: Nothing as always
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
	char *operation;

	operation = strtok(content, " \n\t");
	if (operation && operation[0] == '#')
		return (0);
	bus_file.argue = strtok(NULL, " \n\t");
	while (array_check[initial].opcode && operation)
	{
		if (strcmp(operation, array_check[initial].opcode) == 0)
		{	array_check[initial].f(stack, counter);
			return (0);
		}
		initial++;
	}
	if (operation && array_check[initial].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file_check);
		free(information);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

