#include "main.h"
#include <string.h>
/**
 * *rot13 - This function encodes a string using rot13.
 * @s: Is the pointer to the string.
 *
 * Return: s encoded.
 */
char *rot13(char *s)
{
	unsigned long int i;
	int j = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char new[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	unsigned long int length = strlen(letters);

	while (s[j] != '\0')
	{
		for (i = 0; i < length; i++)
		{
			if (s[j] == letters[i])
			{
				s[j] = new[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
