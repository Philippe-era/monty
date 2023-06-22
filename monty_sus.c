#include "monty.h"
/**
  *f_sub-  evulation by sus to emmunrate the queue
  *@head: Head stack to be examined by the queue
  *@counter: counts the number of lines in the stack
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *help_node;
	int sus_num, more_num;

	help_node = *head;
	for (more_num = 0; help_node != NULL; more_num++)
		help_node = help_node->next;
	if (more_num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	help_node = *head;
	sus_num = help_node->next->n - help_node->n;
	help_node->next->n = sus_num;
	*head = help_node->next;
	free(help_node);
}
