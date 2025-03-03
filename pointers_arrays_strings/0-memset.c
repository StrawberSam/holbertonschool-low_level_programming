#include "main.h"

/**
 * _memset - check the code
 *@s: pointer s point to n
 *@n: number of byte
 *@b: constant byte
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n) /*tant que n est diff de zero, le boucle continue à s'executer*/
	{
	s[n] = b; /*n est affecté à b*/
	n--; /*remplit les indices du tableau en partant de la fin*/
	}
	return (s);
}
