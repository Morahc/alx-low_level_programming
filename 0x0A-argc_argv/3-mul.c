#include <stdio.h>
#include <stdlib.h>

/**
 * main - nultiplies two numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: product of number on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc <= 1)
	{
		printf("Error");

		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
