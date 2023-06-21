#include "monty.h"
/**
 * f_mod - division of computation of stacks
 * @head: first line in the queue
 * @counter: counts the number of line
 * Return: Nothing will be returned Always success
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *head_point;
	int length_line = 0, success = 0, help_node;

	head_point = *head;
	while (head_point)
	{
		head_point = head_point->next;
		length_line++;
	}
	if (length_line < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	if (head_point->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	help_node = head_point->next->n % head_point->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

