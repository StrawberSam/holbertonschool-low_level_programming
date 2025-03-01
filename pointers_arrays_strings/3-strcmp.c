#include "main.h"

/**
 * _strcmp - compare 2 strings
 *@s1: premiere chaine de caractère
 *@s2: seconde chaine de caractère
 * Return: resultat.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}
