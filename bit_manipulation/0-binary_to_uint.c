#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned int.
 * @b: It's a pointer to the binary number.
 *
 * Return: The unsigned integer converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			res = (res << 1) | (b[i] - '0');
		else
			return (0);
	}
	return (res);
}
