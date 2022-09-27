#include "main.h"

/**
 * _memset - check main
 * Description: a function that fills memory with constant byte
 * @s: a pointer input
 * @b: an input character
 * @n: an input integer
 * Return: a pointer to a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
