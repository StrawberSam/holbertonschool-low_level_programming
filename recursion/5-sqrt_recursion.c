#include "main.h"

/**
 *_sqrt_recursion_help - check the code
 *@n: number
 *@a: racine
 *Return: racine carrée
 */

int _sqrt_recursion_help(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}

	if (a * a == n)
	{
		return (a);
	}

	else
	{
	return (_sqrt_recursion_help(n, a + 1));
	}
}


/**
 *_sqrt_recursion - check the code
 *@n: number
 *Return: racine carrée
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_help(n, 1));
}
