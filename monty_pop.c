#include "monty.h"
/**
 * f_pop – Top of stack will be printed
 * @head:  Head of stack to be displayed
 * @counter: line count of the counter
 * Return: Always Success 0
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *head_point;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	*head = head_point->next;
	free(head_point);
}

