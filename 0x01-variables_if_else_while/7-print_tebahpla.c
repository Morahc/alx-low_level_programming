#include <stdio.h>

/*
* main - prints lowercase alphabets in reverse 
* Returns 0 on succes
*/

int main(void)
{
        for(int ch = 'z'; ch >= 'a'; ch--)
        {
                putchar(ch);
        }
        putchar('\n');

        return (0);
}
