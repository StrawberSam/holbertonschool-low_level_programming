#include "main.h"

/**
 * reverse_array - print à l'envers
 *@a: tableau de nombre entier
 *@n: nombre d'élément dans le tableau
 * Return: none cause of void.
 */

void reverse_array(int *a, int n)
{
	int debut = 0;
	int fin = n - 1;

	while (debut < fin)
	{
	int tmp = a[debut];

	a[debut] = a[fin];
	a[fin] = tmp;

	debut++;
	fin--;
	}
}
