#include "function_pointers.h"

/**
 *int_index - fonction qui recherche un entier
 *@array: tableau
 *@size: taille
 *@cmp: pointeur qui pointe une fonction
 *Return: un entier
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)/*parcours les élements du tableau*/
	{
		cmp(array[i]); /*pour chaque élements, appeler la fonction cmp*/

		result = cmp(array[i]);/*stock le résultat*/

		if (result != 0)/*vérifie le resultat*/
		{
			return (i);
		}
	}
	return (-1);/*retourne -1 quand les éléments ne match pas*/
}
