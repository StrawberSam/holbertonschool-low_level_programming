#include "main.h"


/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int multi, number;

		for (multi = 0; multi < 10; multi++)
		{
			for (number = 0; number <= 14; number++)
			{
				if (number > 9)

				_putchar((number / 10) + '0');
				_putchar((number % 10) + '0');
			}
			_putchar('\n');
		}
}
