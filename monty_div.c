#include "monty.h"
/**
 * f_div – division of two top elements
 * @head: head stack
 * @counter: number of line counting
 * Return: nothing to be returned besides 0
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	help_node = head_point->next->n / head_point->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

