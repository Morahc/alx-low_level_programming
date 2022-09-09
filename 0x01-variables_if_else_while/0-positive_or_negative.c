#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - prints either is positive, is negative or is zero
 * depending on n.
 *  Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive\n");
	} 
	else if (n < 0)
	{
		printf("is negative\n");
	} 
	else if (n == 0)
	{
		printf("is zero\n");
	};
	return (0);
}
