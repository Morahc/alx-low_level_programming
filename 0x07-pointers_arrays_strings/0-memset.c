#include "main.h"
/**
 * _memset - this function fills n bytes
 *
 * @s: address to memory block
 * @b: char to be used
 * @n: fills n bytes of memory area
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}

	return (s);
}
