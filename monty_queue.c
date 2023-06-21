#include "monty.h"

/**
 * addqueue – tail of stack in check
 * @n: value to be evulaed
 * @head: stack of head
 * Return: Always success 0
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
 * f_queue – Displays the top of stack
 * @head: Head stack of it
 * @counter: Number of lines to be displayed
 * Return: Always Success 0
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus_file.pattern = 1;
}

