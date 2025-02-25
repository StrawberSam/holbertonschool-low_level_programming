#include "main.h"

/**
 * print_square - check the code
 * @size: the size of the square
 * Return: no return.
 */

void print_square(int size)
{
	int colonne, ligne;

	if (size <= 0)
		_putchar('\n');

	for (ligne = 0; ligne < size; ligne++)
	{
		for (colonne = 0; colonne < size; colonne++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
