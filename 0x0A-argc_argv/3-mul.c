#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the entry point of the code
 * @argc: stores the number of command-line arguments passed
 * @argv: an array of character pointers listing all the arguments.
 * Return: 0 Successful
 */
int main(int argc, char **argv)
{
	int results;

	if (argc == 3)
	{
		results = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", results);
	}
	else
	{
		printf("Error\n");
	}
return (0);
}
