#include "main.h"

/**
 * print_diagonal - check the code
 * @n : letter for the script
 * Return: no return.
 */

void print_diagonal(int n)
{
	int colonne, ligne;

	if (n <= 0)
		_putchar('\n');

	for (ligne = 0; ligne < n; ligne++)
	{
		for (colonne = 0; colonne < ligne; colonne++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
}
