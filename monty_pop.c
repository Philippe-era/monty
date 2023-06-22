#include "monty.h"
/**
 * f_pop – displays the top of the stack
 * @head: Head stack we up you cava
 * @counter: Line number of counter we are up on
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *head_point;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head_point = *head;
	*head = head_point->next;
	free(head_point);
}
