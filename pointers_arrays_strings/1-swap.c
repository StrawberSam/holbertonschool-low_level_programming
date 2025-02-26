#include "main.h"

/**
 * swap_int - check the code
 * @a: character 1 for the two integers
 * @b: charater 2
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int c;

	*a = 98;
	*b = 42;

	c = *a;
	*a = *b;
	*b = c;
}
