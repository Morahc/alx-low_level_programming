#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is uppercase
 * @c: character
 * Return: if uppercase 1, otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
