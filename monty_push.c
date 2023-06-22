#include "monty.h"
/**
 * f_push – Node will be added to the stack in the end
 * @head: Head stack that will be evualted
 * @counter: number of lines that will be displayed on the stack
*/
void f_push(stack_t **head, unsigned int counter)
{
	int num_check, join = 0, pattern = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			join++;
		for (; bus.arg[join] != '\0'; join++)
		{
			if (bus.arg[join] > 57 || bus.arg[join] < 48)
				pattern = 1; }
		if (pattern == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	num_check = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, num_check);
	else
		addqueue(head, num_check);
}
