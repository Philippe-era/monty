#include "monty.h"
/**
 * f_mod – divides the modular of the file ahead
 * @head: Head of the stack is wassup
 * @counter: number of lines in the counter
 * Return: Nothing to be returned you check
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	if (head_point->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	help_node = head_point->next->n % head_point->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

