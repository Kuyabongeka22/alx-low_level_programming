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
	printf("%d\n", argc - 1);
	(void)argv;
return (0);
}
