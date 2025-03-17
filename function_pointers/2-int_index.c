#include "function_pointers.h"

/**
 *int_index - fonction qui recherche un entier
 *@array: tableau
 *@size: taille
 *@cmp: pointeur qui pointe une fonction
 *Return: l'élement du tableau
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)/*parcours les élements du tableau*/
	{
		if (cmp(array[i]) != 0)/*appeler la fonction cmp + vérif*/
		{
			return (i);/*retourne i si c'est trouvé*/
		}
	}
	return (-1);/*retourne -1 si rien n'a été trouvé*/
}
