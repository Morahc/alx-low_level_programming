#include "main.h"

/**
 * leet - encodes a string in 1337
 * @c: string to be encoded
 *
 * Return: the encoded string;
 */
char *leet(char *c)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
			}
		}
	}

	return (c);
}