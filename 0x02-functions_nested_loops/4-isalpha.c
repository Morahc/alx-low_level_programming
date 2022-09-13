#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks for alphabetic characters
 * @c: character to check
 * Return: 1 if character is lowercase. otherwise 0
 */
int _isalpha(int c)
{
        if (isalpha(c))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
