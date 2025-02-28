#include "main.h"

/**
 * _strcat - check the code
 * @dest:second string
 * @src:first string
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int start = *dest + *src;

	while (*src++)
	start++;

	while (*dest)
	{
		*src++ = *dest++;
	}
	*dest = '\0';
	return (dest);
}
