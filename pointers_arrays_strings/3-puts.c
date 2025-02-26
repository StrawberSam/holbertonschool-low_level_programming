#include "main.h"

/**
 * _puts - check the code
 * @str: variable
 * Return: none.
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
