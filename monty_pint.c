#include "monty.h"
/**
 * f_pint – top of stack to be printed
 * @head: head stack to be printed firstly
 * @counter: number of lines to be counted
 * Return: Always Success 0
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus_file.file_check);
		free(bus_file.information);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
