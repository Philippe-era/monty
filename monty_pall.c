#include "monty.h"
/**
 * f_pall – the stack will be displayed
 * @head: the header point meaning first in line
 * @counter: counter counts
 * Return: Always 0 success
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

