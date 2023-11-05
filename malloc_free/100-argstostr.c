#include <stdlib.h>
#include <string.h>

/**
* *argstostr - This function concatenates all the arguments of your program.
* @ac: It's the maximum number of characters in the string.
* @av: It's a pointer to the string.
*
* Return: NULL if ac == 0 or av == NULL. A pointer to a new string, or NULL
* if it fails.
*/
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, tot_len = 0, arg_len, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		while (av[i][arg_len] != '\0')
		{
			arg_len++;
		}
		tot_len += arg_len + 1;
	}
	concat_str = (char *)malloc(tot_len + 1);
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		while (av[i][arg_len] != '\0')
		{
			concat_str[pos] = av[i][arg_len];
			arg_len++;
			pos++;
		}
		concat_str[pos] = '\n';
		pos++;
	}
	concat_str[tot_len] = '\0';
	return (concat_str);
}
