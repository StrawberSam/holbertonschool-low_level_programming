#include "function_pointers.h"

/**
 *array_iterator - fonction qui exécute une fonction donnée en paramètre
 *sur chaque élément d'un tableau.
 *@array: tableau
 *@size: taille du tableau
 *@action: pointeur vers la fonction
 *Return: rien car void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
