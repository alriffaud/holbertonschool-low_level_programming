#include <stdlib.h>
#include <string.h>

/**
* *_strdup - This function  returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
* @str: It's a pointer to the string given as a parameter.
*
* Return: NULL if str = NULL, on success returns a pointer to the duplicated
* string. It returns NULL if insufficient memory was available.
*/
char *_strdup(char *str)
{
	char *res;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		res[i] = str[i];
	res[len] = '\0';
	return (res);
}
