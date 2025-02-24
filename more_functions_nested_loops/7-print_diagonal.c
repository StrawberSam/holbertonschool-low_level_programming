#include "main.h"

/**
 * print_diagonal - check the code
 * @n : letter for the script
 * Return: no return.
 */

void print_diagonal(int n)
{
	int barre;

	for (barre = 0; barre < n; barre++)
	{

		if (barre < n)
			_putchar('\\');
	}
	_putchar('\n');
}
