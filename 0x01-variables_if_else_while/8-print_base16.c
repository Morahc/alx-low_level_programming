#include <stdio.h>

/*
* main - prints all the numbers of base 16 in lowercase
* Returns 0 on succes
*/

int main(void)
{
        for(int i = 48; i < 58; i++)
        {
                putchar(i);
        }
	for(char ch = 'A'; ch <= 'F'; ch++)
	{
		putchar(ch);
	}
        putchar('\n');

        return (0);
}
