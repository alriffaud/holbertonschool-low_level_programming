#include "main.h"
/**
 * *cap_string- Changes all lowercase letters of a
 * string to uppercase.
 * @s: Is the first pointer to a character to swaps.
 *
 * Return: None
 */
char *cap_string(char *s)
{
	char *begin;

	begin = s;
	while (*s != '\0')
	{
		while (*s == ' '  && *s == '\t' && *s == '\n'
			&& *s == ',' && *s == ';' && *s == '.' && *s == '!'
			&& *s == '?' && *s == '"' && *s == '(' && *s == ')'
			&& *s != '{' && *s != '}')
		{
			s++;
		}
		if (*s >= 'a' && *s <= 'z' && *s != '\0')
			*s = *s - 32;
		s++;
	}
	return (begin);
}
