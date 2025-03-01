#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - check the code
 *@dest: second string
 *@src: first string
 *@n: maximum number of characters
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
