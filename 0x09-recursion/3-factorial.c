#include "main.h"

/**
 * factorial - finds factorial of given number
 * @n: given number
 *
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n == 1)
		return;
	else
		return (n * factorial(n - 1));
}
