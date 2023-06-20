#include "monty.h"

/**
* main – code compiler
* @argc: number of parameters
* @argv: location of file
* Return: Success
*/
int main(int argc, char *argv[])
{
	char *info;
	FILE *file_two;
	size_t size_check = 0;
	ssize_t get_input = 1;
	stack_t *stack_heap = NULL;
	unsigned int num_check = 0;
	bus_t bus_file = {NULL, NULL, NULL, 0};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_two = fopen(argv[1], "r");
	bus_file.file_check = file_two;
	if (!file_two)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (get_input > 0)
	{
		info = NULL;
		get_input = getline(&info, &size_check, file_two);
		bus_file.information = info;
		num_check++;
		if (get_input > 0)
		{
			execute(info, &stack_heap, counter, file_two);
		}
		free(info);
	}
	free_stack(stack_heap);
	fclose(file_two);
return (0);
}

