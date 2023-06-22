#include "monty.h"
/**
 * f_swap – Two top elements will be added to maximize space for the stack
 * @head: Head stack looking in the right direction
 * @counter: counts the number of lines
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *head_point;
	int length_line = 0, help_node;

	head_point = *head;
	while (head_point)
	{
		head_point = head_point->next;
		length_line++;
	}
	if (length_line < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	help_node = head_point->n;
	head_point->n = head_point->next->n;
	head_point->next->n = help_node;
}
