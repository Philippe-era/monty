#include "monty.h"
/**
 * f_pall – Displays the stack in full you check
 * @head: First in line stack we know wassup
 * @counter: No counter
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *head_point;
	(void)counter;

	head_point = *head;
	if (head_point == NULL)
		return;
	while (head_point)
	{
		printf("%d\n", head_point->n);
		head_point = head_point->next;
	}
}

