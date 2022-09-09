#include <stdio.h>

/*
* main - prints all single digit base 10 number using putchar
* Returns: 0 on succes
*/

int main(void)
{
        for(int i = 48; i <= 58; i++)
        {
                putchar(i);
        }
        putchar('\n');

        return (0);
}

