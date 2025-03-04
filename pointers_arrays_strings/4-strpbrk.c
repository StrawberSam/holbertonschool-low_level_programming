#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s: string
 *@accept: string
 * Return: s or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')  /*On parcourt la chaîne s*/
	{
		i = 0; /*Réinitialiser i avant de commencer la comparaison*/
		while (accept[i] != '\0') /*On parcourt la chaîne accept*/
		{
			if (*s == accept[i]) /*Si le caractère courant de s est dans accept*/
				return (s); /*On retourne le pointeur s*/
			i++;
		}
		s++;  /*On avance au caractère suivant de la chaîne s*/
	}

	return (NULL);  /*Retourne NULL si aucune correspondance n'est trouvée*/
}
