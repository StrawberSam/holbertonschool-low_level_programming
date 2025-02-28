#include "main.h"

/**
 * _strcat - check the code
 *
 * Return: Always 0.
 */

 char *_strcat(char *dest, char *src)
{
	int start = *src + *dest;

	while (*src++)
	start++;

	while (*dest)
	{
		*src++ = *dest++;
	}
	*src = '\0';
}
