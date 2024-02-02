#include "main.h"

/**
 * print_last_digit- prints last digit of a number
 * @x: last digit of a number
 * Return: x
 */

int print_last_digit(int x)
{
	int last_digit;
	last_digit = x % 10;
	_putchar(last_digit);
	return (last_digit);
}
