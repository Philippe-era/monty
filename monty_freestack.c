#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *help_node;

	help_node = head;
	while (head)
	{
		help_node = head->next;
		free(head);
		head = help_node;
	}
}

