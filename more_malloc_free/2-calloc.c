#include "main.h"

/**
 *_calloc - allocates memory for an array
 *@nmemb: nombre de membre
 *@size: taille
 *Return: pointeur de l'allocation mémoire
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *tableau, nmb;

	if (nmemb == 0 || size == 0)
	return (NULL);

	tableau = malloc(nmemb * sizeof(size));

	if (tableau == NULL)
	return (NULL);

	for (nmb = 0; nmb < nmemb; nmb++)
	{
		tableau[nmb] = 0;
	}

	return (tableau);
}
