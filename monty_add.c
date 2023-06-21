#include "monty.h"
/**
 * f_add - addition of the two elements on top
 * @head: head of stack
 * @counter: number of lines counted
 * Return: Nothing will be returned
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length_line = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		length_line++;
	}
	if (length_line < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

