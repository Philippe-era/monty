#include "monty.h"
/**
 * f_mul – multiplication of stack files
 * @head: head of stack will be displayed
 * @counter: line number of counter thanks alot
 * Return: Nothing will be returned
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	help_node = head_point->next->n * head_point->n;
	head_point->next->n = help_node;
	*head = head_point->next;
	free(head_point);
}

