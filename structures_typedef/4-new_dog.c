#include <stdlib.h>
#include "dog.h"

/**
 * _copy - copy
 * @src: source
 * Return: Ptr
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *new_name, *new_owner;

	if (name == NULL && owner == NULL)
	{
		return (NULL);
	}

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	(*doggy).name = new_name;

	(*doggy).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*doggy).name);
		free(doggy);
		return (NULL);
	}
	(*doggy).owner = new_owner;

	return (doggy);
}
