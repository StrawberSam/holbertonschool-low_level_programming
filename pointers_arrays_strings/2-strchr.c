#include "main.h"

/**
 * _strchr - locate a character in a string
 *@s: pointeur
 *@c: caractère
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
