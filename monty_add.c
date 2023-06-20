#include "monty.h"
/**
 * f_add – elements to be added
 * @head: number 1 in queue
 * @counter: nume of the line
 * Return: return 0 for suceess
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *head_point;
	int length_line = 0, check = 2, help_node;

	head_point = *head;
	while (head_point)
	{
		head_point = head_point->next;
		length_line++;
	}
	if (length_line < check)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	help_node = head_point->n + head_point->next->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

