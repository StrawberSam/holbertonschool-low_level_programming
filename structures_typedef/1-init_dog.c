#include <stdlib.h>
#include "dog.h"


/**
 *init_dog - création de valeur
 *@d: structure
 *@name: nom
 *@age: l'âge
 *@owner: propriétaire
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
