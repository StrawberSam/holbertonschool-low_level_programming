#include "main.h"

/**
 *_puts_recursion - check the code
 *@s: variable qui contient la phrase
 *Return: non cause of void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
