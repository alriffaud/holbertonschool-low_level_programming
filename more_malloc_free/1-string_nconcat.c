#include <stdlib.h>
#include <string.h>

/**
* *string_nconcat - This function concatenates two strings.
* @s1: It's a pointer to the first string.
* @s2: It's a pointer to the second string.
* @n: It's the total number of bytes of s2 to concatenate.
*
* Return: NULL if str = NULL, on success returns a pointer to a newly
* allocated space in memory which contains the contents of s1, followed
* by the contents of s2 string. It returns NULL if insufficient memory
* was available.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	if (n < len2)
		res = malloc(len1 + n + 1);
	else
		res = malloc(len1 + len2 + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	if (n < len2)
	{
		for (i = len1; i < (len1 + n); i++)
			res[i] = s2[i - len1];
		res[len1 + n] = '\0';
	}
	else
	{
		for (i = len1; i < (len1 + len2); i++)
			res[i] = s2[i - len1];
		res[len1 + len2] = '\0';
	}
	return (res);
}
