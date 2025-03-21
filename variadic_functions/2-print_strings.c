#include "variadic_functions.h"

/**
 *print_strings - print strings
 *
 *@separator:separateur
 *@n: nombre d'entier qui passe dans la fonction
 *Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char* string;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
			string = "(nil)";

		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%s", string);
	}

	printf("\n");
	va_end(args);
}
