#include "main.h"

/**
 *array_range - create an array of integers
 *@min: valeur minimum
 *@max: valeur maximum
 *Return: pointeur de l'allocation mémoire
 */

int *array_range(int min, int max)
{
	int *tableau, total, i;

	if (min > max)
	return (NULL);

	total = max - min + 1;
	tableau = malloc(total * sizeof(int));

	if (tableau == NULL)
	return (NULL);

	for (i = 0; i < total; i++)
	{
		tableau[i] = min + i;
	}
	return (tableau);
}
