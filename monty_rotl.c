#include "monty.h"
/**
  *f_rotl- Stack rotates the heap
  *@head: Head stack to the top
  *@counter: line_number of the counter
  *Return: Always nothing 0
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temperature = *head, *help_node;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	help_node = (*head)->next;
	help_node->prev = NULL;
	while (temperature->next != NULL)
	{
		temperature = temperature->next;
	}
	temperature->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temperature;
	(*head) = help_node;
}

