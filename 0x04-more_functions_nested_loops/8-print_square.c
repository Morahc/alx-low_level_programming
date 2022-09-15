#include "main.h"
/**
 * print_square - prints a sqaure, followed by a newline
 * @size: size of the sqaure
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
