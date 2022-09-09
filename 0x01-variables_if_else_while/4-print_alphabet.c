#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 * followed by a new line
 * Return 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch)
	}
	putchar('\n');
	return (0);
}
