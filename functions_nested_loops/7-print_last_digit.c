#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - check the code
 *@r: number for the test
 * Return: last digit.
 */

int print_last_digit(int r)
{
	int lastdigit = r % 10;

	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');

return (lastdigit);
}
