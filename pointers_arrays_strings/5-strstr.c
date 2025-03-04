#include "main.h"

/**
 *_strstr - function that locates a substring
 *
 *@haystack: la principale chaine
 *@needle: la chaine secondaire
 *Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;

	while (haystack[count] != '\0' && needle[count] != '\0')
	{
		if (needle != haystack)
			return (needle);
	}
	return (NULL);
}
