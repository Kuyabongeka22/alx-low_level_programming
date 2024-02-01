#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n- number to be checked
 * return: 1, 0, -1 at different conditions
 */

int print_sign(int n)
{

	if (n > 0)
	{
	putchar(43);
	return 1;
	}
	else if (n < 0)
	{
	_putchar(45);
	return -1;
	}
	else
	{
	_putchar(48);
	return 0;
	}
}
