#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that stores information about a dog
 * @name: pointer to a char representing the name of the dog
 * @age: float representing the age of the dog
 * @owner: pointer to a char representing the owner of the dog
 *
 * Description: This structure stores basic information about a dog,
 * including its name, age, and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
