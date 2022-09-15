#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check for a digit (0 - 9)
 * @c: integer
 *
 * Return: if digit return 1, otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
