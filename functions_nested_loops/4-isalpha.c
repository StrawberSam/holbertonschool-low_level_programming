#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check the code.
 *@c: the letter for the test.
 * Return: 1 if c is a letter, lowercase or uppercase. 0 if not.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
