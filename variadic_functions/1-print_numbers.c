#include "variadic_functions.h"

/**
 *print_numbers - fonction qui print les nombres
 *
 * @separator: string to be printed between numbers
 * @n: nombers d'entiers qui passent dans la fonction
 * Return: Numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(args, unsigned int));
	}

	printf("\n");
	va_end(args);

}
