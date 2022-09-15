#include <stdio.h>
#include "main.h"
/**
 * main - prints a triangle, followed by a new line.
 * @size: size of triangle
 * Return: Always 0
 */
int main(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	return (0);
}
