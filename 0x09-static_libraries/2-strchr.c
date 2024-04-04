#include "main.h"
/**
 * _strchr - locates first occurrence of the character c
 * @s: string to be scanned
 * @c: character to be searched in s
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
