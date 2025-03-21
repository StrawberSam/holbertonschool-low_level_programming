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
	char *string;/*initialise une chaîne de caractère pour mettre les args*/

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)/*boucle pour les chaînes de caractères*/
	{
		string = va_arg(args, char*);/*chaîne de caratère avec type char*/

		if (string == NULL)/*si une des string est null, retourn (nil)*/
			string = "(nil)";

		if (i > 0)/*mettre separateur avec condition*/
		{
			printf("%s", separator);
		}
		printf("%s", string);
	}

	printf("\n");
	va_end(args);
}
