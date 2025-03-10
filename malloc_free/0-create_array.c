#include "main.h"

/**
 * create_array - créa tableau type char et initialise avec un char spéc
 *@size: taille
 *@c: varibale qui se déplace dans le tableau ?
 * Return: null if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *tableau = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		tableau[i] = c;
	}

	if (tableau == 0)
	return (NULL);

return (tableau);
}
