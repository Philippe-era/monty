#include "monty.h"
/**
 * addnode – head_stack to be added
 * @head: kop
 * @n: value check
 * Return: Always success
*/
void addnode(stack_t **head, int n)
{

	stack_t *node_check, *help_node;

	help_node = *head;
	node_check = malloc(sizeof(stack_t));
	if (node_check == NULL)
	{ printf("Error\n");
		exit(0); }
	if (help_node)
		help_node->prev = node_check;
	node_check->n = n;
	node_check->next = *head;
	node_check->prev = NULL;
	*head = node_check;
}

