#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure for combine data items of different kinds
 *@name: nom
 *@age: age
 *@owner: propriétaire
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
