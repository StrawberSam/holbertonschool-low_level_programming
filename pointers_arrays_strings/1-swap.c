#include "main.h"
#include <limits.h>
/**
 * swap_int - check the code
 * @a: character 1 for the two integers
 * @b: charater 2
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
