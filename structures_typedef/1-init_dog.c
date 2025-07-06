#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to assign
 * @age: age to assign
 * @owner: owner to assign
 *
 * Description: This function initializes the members of the struct dog
 * pointed to by @d with the given values.
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
