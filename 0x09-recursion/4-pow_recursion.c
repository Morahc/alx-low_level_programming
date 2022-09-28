#include "main.h"

/**
 * _pow_recursion - raise x to the power of y
 * @x: number to be increeased
 * @y: power
 *
 * Return: powered value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}