#include "main.h"
#include <stdio.h>
/**
 *  _atoi- This function convert a string to an integer.
 * @s: Is the pointer to an string.
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int res = 0, num_dig = 0;

	while (s != NULL)
	{
		if (num_dig == 0 && *s >= 48 && *s <= 57)
		{
			res = *s - '0';
			num_dig = 1;
		}
		if (num_dig > 0 && *s >= 48 && *s <= 57)
		{
			res = 10 * res + (*s - '0');
			num_dig++;
		}
		s++;
	}
	return (res);
}
