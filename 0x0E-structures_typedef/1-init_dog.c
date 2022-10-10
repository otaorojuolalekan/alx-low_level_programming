#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog to be initialized.
 * @name: Dog name.
 * @age: Dog Age.
 * @owner: Dog Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
