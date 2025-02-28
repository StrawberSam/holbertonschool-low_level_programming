#include "main.h"

/**
 * _strcpy - check the code
 * @src: the string we need to copie
 * @dest: string go in
 * Return: the pointer of dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;/*le i sert a se deplacer dans le string*/

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
