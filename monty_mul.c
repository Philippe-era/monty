#include "monty.h"
/**
 * f_mul – multiples two stacks
 * @head: first in line the queue
 * @counter: number of lines to be counted
 * Return: Nothing to returned 0 as always
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *head_point;
	int length_line = 0, success = 2, help_node;

	head_point = *head;
	while (head_point)
	{
		head_point = head_point->next;
		length_line++;
	}
	if (length_line < success)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head = *head;
	help_node = head_point->next->n * head_point->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

