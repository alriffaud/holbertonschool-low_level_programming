#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name.
 * @name: Is a pointer to a name to print.
 * @f: Is a pointer to other function.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
