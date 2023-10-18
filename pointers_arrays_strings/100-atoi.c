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
	int res = 0, num_dig = 0, sign = 1, start = 0;

	while (*s != '\0')
	{
		if (start == 1 && *s != '-' && *s != '+' && *s != ' '
		&& !(*s >= '0' && *s <= '9'))
			break;
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			if (num_dig > 0 && res < (INT_MAX - (*s - '0')) / 10)
			{
				res = 10 * res + (*s - '0');
				num_dig++;
				start = 1;
			}
			else if (num_dig == 0)
			{
				res = *s - '0';
				num_dig = 1;
				start = 1;
			}
		}
		s++;
	}
	if (res < (INT_MAX - (*s - '0')) / 10)
		return (sign * res);
	else
		return (10 * sign * res + sign * (*s - '0'));
}
