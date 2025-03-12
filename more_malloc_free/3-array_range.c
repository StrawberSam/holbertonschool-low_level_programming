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

	if (min > max)/*vérification de si min est plus grnd que max*/
	return (NULL);

	total = max - min + 1;/*faire un total pour y allouer la mémoire*/
	tableau = malloc(total * sizeof(int));/*allocation mémoire*/

	if (tableau == NULL)/*vérif si malloc n'a pas fonctionné*/
	return (NULL);

	for (i = 0; i < total; i++)/*ajoute min max dans le tableau+ leur valeur*/
	{
		tableau[i] = min + i;
	}
	return (tableau);
}
