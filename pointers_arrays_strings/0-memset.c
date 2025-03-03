#include "main.h"

/**
 * _memset - fills the first n bytes pointed to by s with the constant byte b
 *@s: pointer s point to n
 *@n: number of byte
 *@b: constant byte
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n) /*tant que n est diff de zero, la boucle continue à s'executer*/
	{
		s[n - 1] = b; /*n est affecté à b*/
		n--; /*remplit les indices du tableau en partant de la fin*/
	}
	return (s);
}
