#include "main.h"

/**
 *factorial - check the code
 *@n: variable
 *Return: factorial of a given number
 */

int factorial(int n)
{
	if (n == 0)
	return (1);

	if (n < 0)
	return (-1);

	else
	return (n * factorial(n - 1));

}
