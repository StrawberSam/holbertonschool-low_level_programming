#include "main.h"

/**
 * string_toupper - check the code
 * @s: pointeur
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32; /*converti avec tableau ascii a - 32 = A, b - 32 = B*/
	}
	return (s);
}
