#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index.
 * @n: It's an unsigned long integer number to convert and print.
 * @index: It's the index, starting from 0 of the bit you want to get.
 *
 * Return: None.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
