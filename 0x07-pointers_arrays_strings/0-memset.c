#include "main.h"
/**
 * _memset - fill a block of memory with a particular value
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
