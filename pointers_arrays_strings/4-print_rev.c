#include "main.h"

/**
 * print_rev - check the code
 * @s: variable ou un pointeur point
 * Return: chaine de caractere.
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0') /*trouve la longueur de la chaine*/
	{
		count++;
	}

	while (count >= 0) /*affiche la chaine en inverse*/
	{
		_putchar(s[count]);
		count--;
	}
_putchar('\n');
}
