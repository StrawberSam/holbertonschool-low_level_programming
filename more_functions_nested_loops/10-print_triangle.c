#include "main.h"


/**
 * print_triangle - check the code
 * @size: size of the triangle
 * Return: no return.
 */

void print_triangle(int size)
{
	int colonne, ligne;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (ligne = 0; ligne < size; ligne++)
		{

			for (colonne = 0; colonne <= size; colonne++)
			{
				if (colonne < (size - ligne))
				{
					_putchar(' ');
				}

				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
