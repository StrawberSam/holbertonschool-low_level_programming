#include "main.h"

/**
 * print_to_98 - check the code
 * @n: the letter we use
 * Return: no return.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	printf("%d\n", n);
}
