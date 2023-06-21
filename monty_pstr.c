#include "monty.h"
/**
 * f_pstr – Diplsays the full stack from top
 * @head: Head stack will be printed
 * @counter: Number of lines to be counted
 * Return: Nothing Always 0
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

