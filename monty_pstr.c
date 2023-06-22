#include "monty.h"
/**
 * f_pstr – displays the first string you know wassup so we blessed
 * @head: Head of stack the first in line of stack
 * @counter: Number of lines of counter
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *head_point;
	(void)counter;

	head_point = *head;
	while (head_point)
	{
		if (head_point->n > 127 || head_point->n <= 0)
		{
			break;
		}
		printf("%c", head_point->n);
		head_point = head_point->next;
	}
	printf("\n");
}
