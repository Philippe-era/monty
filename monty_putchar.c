#include "monty.h"
/**
 * f_pchar – The top of stack is on for printing
 * @head: Head of stack you know wassup
 * @counter: counts the number of lines in the context
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *head_point;

	head_point = *head;
	if (!head_point)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (head_point->n > 127 || head_point->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head_point->n);
}
