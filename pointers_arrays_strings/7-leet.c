#include "main.h"

/**
* *leet - This function encodes a string into 1337.
* @s: This is a pointer to the string we want to encode.
*
* Return: The encoded pointer.
*/
char *leet(char *s)
{
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char nums[] = "43071";
	char *new = s;
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == lower[i] || *s == upper[i])
			{
				*s = nums[i];
				break;
			}
		}
		s++;
	}
	return (new);
}
