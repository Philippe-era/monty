#include "monty.h"
/**
  *f_rotr- revrses the stack in the heap
  *@head: first stack in the line
  *@counter: number of lines counted
  *Return: Return nothing for real
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *duplicate;

	duplicate = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (duplicate->next)
	{
		duplicate = duplicate->next;
	}
	duplicate->next = *head;
	duplicate->prev->next = NULL;
	duplicate->prev = NULL;
	(*head)->prev = duplicate;
	(*head) = duplicate;
}

