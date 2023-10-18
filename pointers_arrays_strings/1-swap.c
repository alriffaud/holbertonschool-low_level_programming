#include "main.h"
/**
 * swap_int - This function swaps the values of two integers.
 * @a: Is the first pointer to an integer to swaps.
 * @b: Is the second pointer to an integer to swaps.
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}
