#include <stdio.h>
#include "dog.h"
/**
 * print_dog - This function prints a struct dog.
 * @d: It's a pointer to the struct dog.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
