#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lowercase
 * followed by a new line.
 *
 * Return: Always 0 on sucess
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

	return (0);
}
