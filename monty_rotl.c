#include "monty.h"
/**
  *f_rotr- reverses the stack for greater use
  *@head: Head stack you know wassup im on top of the food chain
  *@counter: counts the number of lines in the counter
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
