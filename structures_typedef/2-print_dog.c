#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - utiliser printf pour print
 *@d: pointeur qui désigne ma structure
 *Return: aucun
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	printf("(nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
