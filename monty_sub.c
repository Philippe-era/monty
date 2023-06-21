#include "monty.h"
/**
  *f_sub- Replacement of stuff
  *@head: Head stack first in line
  *@counter: Number of lines to be counted
  *Return: Always 0 Success
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *help_node;
	int sus_node, success = 2, node_check;

	help_node = *head;
	for (node_check = 0; help_node != NULL; node_check++)
		help_node = help_node->next;
	if (node_check < success)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	help_node = *head;
	sus_node = help_node->next->n - help_node->n;
	help_node->next->n = sus_node;
	*head = help_node->next;
	free(help_node);
}

