#include <stdio.h>
#include "dog.h"
/**
 * init_dog - This function initialize a variable of type struct dog.
 * @d: It's a pointer to the struct dog.
 * @name: The name of the dog.
 * @age: It's age.
 * @owner: It's owner.
 *
 * Return: A variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
