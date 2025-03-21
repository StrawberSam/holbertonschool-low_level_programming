#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format: Contient les diff types
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	char *s;
	float f;
	int i, k = 0, j = 0, c; /* compteur, integer */
	va_list argument;

	va_start(argument, format);
	while (format[j] != '\0')
	{
		if (format[j] == 'c')
		{
			c = va_arg(argument, int);
			printf("%c", c);
			printf(", ");
		}
		else if (format[j] == 'i')
		{
			i = va_arg(argument, int);
			printf("%d", i);
			printf(", ");
		}
		else if (format[j] == 'f')
		{
			f = va_arg(argument, double);
			printf("%f", f);
			printf(", ");
		}
		else if (format[j] == 's')
		{
			s = va_arg(argument, char*);
			if (s[k] != '\0' && s != NULL)
				printf("%s", s);

			else if (s == NULL)
				s = "(nil)";
		}
		k++;
		j++;
	}
	printf("\n");
	va_end(argument);
}









