#include <stdio.h>
#include <stdlib.h>
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
	dog_t *new = malloc(sizeof(struct dog));

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}

