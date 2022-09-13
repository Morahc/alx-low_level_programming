#include <stdio.h>
#include "main.h"
/**
 * main - prints the sum of even values in a fibonacci
 * sequence, followed by a new line
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;
	int sum = 2;
	int arr[] = {1, 2};

	while (k < 38)
	{
		arr[k] = arr[i] + arr[j];
		if (arr[k] % 2 == 0 && arr[k] < 4000000)
			sum += arr[k];
		i++;
		j++;
		k++;
	}
	return (0);
}
