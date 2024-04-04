#include <stdio.h>
#include "main.h"
/**
 * main - This is the entry point of the code
 * @argc: stores the number of command-line arguments passed
 * @argv: an array of character pointers listing all the arguments.
 * Return: 0 Successful
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
return (0);
}
