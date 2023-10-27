#include "main.h"
#include <string.h>

/**
 * *infinite_add - This function adds two numbers
 * @n1: Is the first number to add.
 * @n2: Is the second number to add.
 * @r: Is the buffer that the function will use to store the result.
 * @size_r: Is the buffer size.
 *
 * Return: The buffer r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), i, partial_sum, rest = 0;
	int min = (len1 < len2) ? len1 : len2;
	int max = (len1 > len2) ? len1 : len2;
	char aux[100];

	if (size_r <= max + 1)
		return (0);
	for (i = 0; i < min; i++)
	{
		partial_sum = (n1[len1 - 1 - i] - '0') + (n2[len2 - 1 - i] - '0') + rest;
		aux[i] = (partial_sum % 10) + '0';
		rest = partial_sum / 10;
		if (len1 == len2 && partial_sum >= 10)
			aux[min] = '1';
	}
	for (i = min; i < max; i++)
	{
		if (len1 < len2)
			partial_sum = (n2[len2 - 1 - i] - '0') + rest;
		else
			partial_sum = (n1[len1 - 1 - i] - '0') + rest;
		aux[i] = (partial_sum % 10) + '0';
		rest = partial_sum / 10;
		if (i == max - 1)
			aux[i + 1] = '1';
	}
	if (partial_sum >= 10)
	{
		for (i = 0; i <= max; i++)
			r[i] = aux[max - i];
		r[max + 1] = '\0';
	}
	else
	{
		for (i = 0; i < max; i++)
			r[i] = aux[max - 1 - i];
		r[max] = '\0';
	}
	return (r);
}
