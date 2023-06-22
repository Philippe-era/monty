#include "monty.h"
/**
  *f_rotl- reverses the stack from the top of the stack
  *@head: Head stack that will be on top
  *@counter: number of lines in the stack
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tempature = *head, *help_node;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	help_node = (*head)->next;
	help_node->prev = NULL;
	while (tempature->next != NULL)
	{
		tempature = tempature->next;
	}
	tempature->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tempature;
	(*head) = help_node;
}
