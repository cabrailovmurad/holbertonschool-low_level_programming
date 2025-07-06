#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - возвращает длину строки
 * @s: строка
 *
 * Return: длина строки
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - копирует строку из src в dest
 * @dest: куда копируем
 * @src: откуда копируем
 *
 * Return: указатель на dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - создает нового пса
 * @name: имя пса
 * @age: возраст
 * @owner: владелец
 *
 * Return: указатель на новый dog_t или NULL при ошибке
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
