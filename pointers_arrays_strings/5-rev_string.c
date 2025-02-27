#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - check the code
 * @s: valeur
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1, count = 0;
	char tmp;

	while (count < len) /*tant que mon debut est < que lgn string */
	{
		tmp = s[count]; /*mon debut s'echange avec ma fin */
		s[count] = s[len];
		s[len] = tmp;

		count++; /*on agremente le debut*/
		len--; /*on degremente la fin*/
	}
}
