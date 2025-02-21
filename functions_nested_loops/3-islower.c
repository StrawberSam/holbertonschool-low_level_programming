#include "main.h"
#include <stdio.h>

/**
 * _islower - check the code.
 * @c: caractere minuscule pour test.
 * Return: 1 if lowercase or 0 if not.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
