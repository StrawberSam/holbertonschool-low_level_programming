#include "main.h"

/**
 *_pow_recursion - calcule la valeur de x à la puissance de y.
 *@x: valeur
 *@y: puissance
 *Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	return (x * _pow_recursion(x, y - 1));
}
