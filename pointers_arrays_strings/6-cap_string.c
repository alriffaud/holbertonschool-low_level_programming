#include "main.h"
/**
 * *cap_string- This function capitalizes all words of a string.
 * @s: Is the pointer to the string.
 *
 * Return: None
 */
char *cap_string(char *s)
{
	char *begin = s;
	int aux = 1;

	while (*s != '\0')
	{
		if (*s == ' '  || *s == '\t' || *s == '\n'
			|| *s == ',' || *s == ';' || *s == '.' || *s == '!'
			|| *s == '?' || *s == '"' || *s == '(' || *s == ')'
			|| *s == '{' || *s == '}')
		{
			aux = 1;
		}
		else if (*s >= 'a' && *s <= 'z' && aux == 1)
		{
			*s = *s - 32;
			aux = 0;
		}
		s++;
	}
	return (begin);
}
