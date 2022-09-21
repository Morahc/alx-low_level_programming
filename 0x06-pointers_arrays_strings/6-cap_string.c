#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes everey word of a string
 * @c: string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *c)
{
    int i = 0;

    while (c[i] != '\0')
    {
        if (i == 0)
        {
            c[i] = toupper(c[i]);
        }
        else if (c[i-1] == ' ')
        {
            c[i] = toupper(c[i]);
        }
    }

    return (c);
}
