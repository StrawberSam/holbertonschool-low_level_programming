#include "main.h"

/**
 * _isdigit - check if c is a digit.
 * @c: variable
 * Return: 1 if yes, 0 if no.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
		return (0);
}
