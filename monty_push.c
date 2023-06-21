#include "monty.h"
/**
 * f_push – Stack will add node to the display
 * @head: Head stack first
 * @counter: counts the number of lines
 * Return: Always 0 success
*/
void f_push(stack_t **head, unsigned int counter)
{
	int num, join = 0, pattern_check = 0;

	if (bus_file.argue)
	{
		if (bus_file.argue[0] == '-')
			join++;
		for (; bus_file.argue[join] != '\0'; join++)
		{
			if (bus_file.argue[join] > 57 || bus_file.argue[join] < 48)
				pattern_check = 1; }
		if (pattern_check == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus_file.file_check);
			free(bus_file.information);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	num = atoi(bus_file.argue);
	if (bus_file.pattern == 0)
		addnode(head, num);
	else
		addqueue(head, num);
}
