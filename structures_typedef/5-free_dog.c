#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - This function free the memory of struct dog.
 * @d: The pointer of the struct dog to free.
 *
 * Return: A variable of type struct dog.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

