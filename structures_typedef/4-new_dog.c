#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - fonction qui compte la longueur de la chaîne
 *
 * @s: string
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _strcpy - copie la string
 * @src: the string we need to copie
 * @dest: string go in
 * Return: the pointer of dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;/*le i sert a se deplacer dans le string*/

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - fonction qui crée un nouveau chien
 *@name:nom
 *@age: age
 *@owner: propiétaire
 *Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (!name || !owner)
		return (NULL);

	p = malloc(sizeof(dog_t));

	if (!p)
		return (NULL);

	p->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (!p->name)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (!p->owner)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	_strcpy(p->name, name);
	_strcpy(p->owner, owner);

	p->age = age;

	return (p);
}
