#include "monty.h"
/**
 * f_swap – Top of stack is on display
 * @head: Head stack you check
 * @counter: counts the numbers of lines within
 * Return: No need Always returns Success
*/
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	help_node = head_point->n;
	head_point->n = head_point->next->n;
	head_point->next->n = help_node;
}

