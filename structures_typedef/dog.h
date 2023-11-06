#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - This define a new type struct dog.
 * @name: The name of the dog.
 * @age: It's age.
 * @owner: It's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
