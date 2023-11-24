#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: It's an unsigned long integer number to flip.
 * @m: It's an unsigned long integer number to get.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int res = n ^ m;

	while (res)
	{
		count += res & 1;
		res = res >> 1;
	}

	return (count);
}
