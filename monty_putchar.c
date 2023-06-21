#include "monty.h"
/**
 * f_pchar – stack will be displayed in a nice way
 * @head: first in line head
 * @counter: checks number of lines to be counted
 * Return: Always 0 succesful program
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *head_point;

	head_point = *head;
	if (!head_point)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (head_point->n > 127 || head_point->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head_point->n);
}

