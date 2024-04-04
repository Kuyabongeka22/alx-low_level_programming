#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - This is the entry point of the code
 * @argc: stores the number of command-line arguments passed
 * @argv: an array of character pointers listing all the arguments.
 * Return: 0 Successful
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; ++i)
	{
		sum = sum + atoi(argv[i]);
		printf("%d\n", sum);
	}
return (0);
}
