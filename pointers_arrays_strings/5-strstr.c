#include "main.h"
#include <stddef.h>
/**
 * *_strstr - This function locates a substring.
 * @haystack: Is the pointer to an string.
 * @needle: Is the pointer to an another string.
 *
 * Description: This function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (\0) are not
 * compared.
 *
 * Return: A a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (haystack == NULL || *haystack == '\0' || needle == NULL
			|| *needle == '\0')
	{
		return (NULL);
	}
	while (*haystack != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);

}
