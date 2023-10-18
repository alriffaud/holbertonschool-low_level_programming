#include "main.h"
/**
 * puts2 - This function prints every other character of a string.
 * @s: Is the pointer to an string.
 *
 * Description: This function prints every other character of a string,
 * starting with the first character, followed by a new line.
 * Return: None.
 */
void puts2(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		if (i % 2 != 0)
			_putchar(*s);
		s++;
		i++;
	}
	_putchar('\n');
}
