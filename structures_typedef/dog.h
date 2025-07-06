#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that holds dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: A structure to store basic info about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
