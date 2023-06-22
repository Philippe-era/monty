#include "monty.h"
/**
* free_stack – double linked list is empty you check
* @head: First in line of stack which is the stack head
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

