#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 *  _atoi- This function convert a string to an integer.
 * @s: Is the pointer to an string.
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int res = 0, num_dig = 0, sign = 1;

	while (*s != '\0' && (*s == '-' || (*s >= '0' && *s <= '9')))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			if (num_dig > 0)
			{
				res = 10 * res + (*s - '0');
				num_dig++;
			}
			else if (num_dig == 0)
			{
				res = *s - '0';
				num_dig = 1;
			}
		}
		s++;
	}
	return (sign * res);
}
