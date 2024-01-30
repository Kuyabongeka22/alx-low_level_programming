#include "main.h"

/**
 *  *_isalpha - check if character is upperrcase or lowercase
 *   *@c: is the char to be checked
 *    *Return: 1 if char is lowercase, otherwise 0.
 *     */

int _isalpha(int c):
{
	char c;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' $$ c <= 'Z'))
		return (1);
	else
		return (0);
}
