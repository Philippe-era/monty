#include "monty.h"
/**
 * f_add – two elements at top
 * @head: stack head
 * @counter: conuts the line numbers
 * Return: Theres nothing that will be returned to the screen
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	help_node = head_point->n + head_point->next->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

