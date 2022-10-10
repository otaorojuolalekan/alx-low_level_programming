#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct dog - struct for dog
 * @name: Dog name
 * @age: Dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
