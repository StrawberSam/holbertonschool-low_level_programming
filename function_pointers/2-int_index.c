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
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)/*parcours les élements du tableau*/
	{
		if (cmp(array[i]) != 0)/*pour chaque élements, appeler la fonction cmp*/
		{ /*vérifie le résultat*/
			return (i);
		}
	}
	return (-1);/*retourne -1 si rien n'a été trouvé*/
}
