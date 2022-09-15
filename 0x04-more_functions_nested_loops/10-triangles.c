#include <stdio.h>

/**
 * main - prints a triangle, followed by a new line.
 * @size: size of triangle
 * Return: Always 0
 */
int main(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
