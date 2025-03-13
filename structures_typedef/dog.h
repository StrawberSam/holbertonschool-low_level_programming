#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure for combine data items of different kinds
 *@name: nom
 *@age: age
 *@owner: propriétaire
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
