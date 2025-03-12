#include "main.h"

/**
 *_calloc - allocates memory for an array
 *@nmemb: nombre de membre
 *@size: taille
 *Return: pointeur de l'allocation mémoire
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tableau;
	unsigned int nmb;

	if (nmemb == 0 || size == 0)/*si nmemb ou size ==0, return null*/
	return (NULL);

	tableau = malloc(nmemb * size);/*alloue mémoire pour nmemb*/

	if (tableau == NULL)/*si ça n'a pas marché, renvoie null*/
	return (NULL);

	for (nmb = 0; nmb < nmemb * size; nmb++)/*allocation mémoire mis à 0*/
	{
		tableau[nmb] = 0;
	}

	return (tableau);
}
