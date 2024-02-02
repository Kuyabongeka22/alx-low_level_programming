#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98 followed by a new line
 * @n: first number to be printed
 * Ruturn: void
 */

void print_to_98(int n)
{
	n = 0;

	while (n < 99)
	{
		putchar(n + ',' + ' ');
		n++;
	}
	printf("\n");
}
