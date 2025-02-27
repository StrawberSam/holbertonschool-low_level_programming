#include "main.h"

/**
 * print_array - check the code for
 * @a: the array
 * @n: number of elements of the array to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i; /*variable i pour se deplacer dans tableau*/

	for (i = 0; i < n; i++)
	{
		printf("%d", *a++);

		if (i < n - 1) /*si pas dernier element, ajoute virgule*/
		{
			printf(", ");
		}
	}
printf("\n");
}
