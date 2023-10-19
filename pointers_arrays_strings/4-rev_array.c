#include "main.h"
/**
 * swapInt - This function swaps two integers.
 * @a: Is the first pointer to a character to swaps.
 * @b: Is the second pointer to a character to swaps.
 *
 * Return: None
 */
void swapInt(int a, int b)
{
	char aux = a;

	a = b;
	b = aux;
}

/**
 * reverse_array - This function returns the reverses of an array.
 * @a: Is the pointer to an array.
 * @n: Is the number of elements of the array
 *
 * Return: None.
 */
void reverse_array(int *a, int n) 
{
	int mitad, i = 0;

	mitad = n / 2;
	while (i <= mitad)
	{
		swapInt(a[i], a[n - i]);
		i++;
	}
}
