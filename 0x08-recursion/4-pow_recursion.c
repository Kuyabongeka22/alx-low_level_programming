#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y != 0)
		return (x * pow(x, y - 1));
	else
		return 1;
}
