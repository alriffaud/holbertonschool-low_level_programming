#include "main.h"
#include <stddef.h>
/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: Is the pointer to an string.
 * @accept: Is the pointer to an another string.
 *
 * Description: This function returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 *
 * Return: An integer representing the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	if (s == NULL || accept == NULL || *accept == '\0')
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			if (accept[j] == '\0')
				break;
		}
	}
	return (i);

}
