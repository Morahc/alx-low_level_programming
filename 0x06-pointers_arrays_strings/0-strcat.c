#include <string.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
