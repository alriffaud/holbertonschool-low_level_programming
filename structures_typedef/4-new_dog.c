#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - This function initialize a variable of type dog_t.
 * @name: The name of the dog.
 * @age: It's age.
 * @owner: It's owner.
 *
 * Return: A variable of type struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(struct dog));

	if (name == NULL || owner == NULL)
		return (NULL);
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}

