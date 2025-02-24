#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: no return with void.
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{
			continue;
		}

		_putchar(a);
	}

	_putchar('\n');
}
