#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - check the code
 *@dest: destination second string
 *@src: source first string
 *@n:max number of character
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
