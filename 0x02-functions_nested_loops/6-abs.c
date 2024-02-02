#include "main.h"
#include <stdio.h>

/**
 * _abs- computes the absolute value of an integer.
 * @x: parameter to be checked
 * Return: return x or -x
 */

int _abs(int x)
{
	if (x > 0)
		return (x);
	else
		return (-x);
}
