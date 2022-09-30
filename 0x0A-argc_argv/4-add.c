#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("0\n");

		return (1);
	}
	else
	{
		int sum = 0;
		int i;

		for (i = 1, i < argc; i++)
		{
			if (isdigit(atoi(argv[i])) == 0)
			{
				printf("Error\n");

				return (1);
			}
			else
			{
				sum += argv[i];
			}
		}

		printf("%d\n", sum);

		return (0);
	}
}
