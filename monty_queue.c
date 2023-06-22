#include "monty.h"

/**
 * addqueue – tail stack will receive new nodes 
 * @n: value to be checked
 * @head: Head of the stack in the queue
*/
void addqueue(stack_t **head, int n)
{
	stack_t *node_check, *help_node;

	help_node = *head;
	node_check = malloc(sizeof(stack_t));
	if (node_check == NULL)
	{
		printf("Error\n");
	}
	node_check->n = n;
	node_check->next = NULL;
	if (help_node)
	{
		while (help_node->next)
			help_node = help_node->next;
	}
	if (!help_node)
	{
		*head = node_check;
		node_check->prev = NULL;
	}
	else
	{
		help_node->next = node_check;
		node_check->prev = help_node;
	}
}
/**
 * f_queue – displays the top of the stack
 * @head: Head of stack in the line to priortize
 * @counter: counts the number of lines in the stack
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
