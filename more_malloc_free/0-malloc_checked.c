#include "main.h"

/**
 *malloc_checked - check the code
 *@b: taille espace
 *Return: pointeur allocation mémoire
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
