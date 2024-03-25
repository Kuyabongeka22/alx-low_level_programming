#include "main.h"
/**
 *_memcpy - copy a block memory from a memory area to another
 *@dest: pointer to where memory is stored
 *@src: pointer to whre memory is copied
 *@n: number of bytes
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
