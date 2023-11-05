#include <stdlib.h>
#include <string.h>

/**
 * count_words - This function returns the number of words in a string.
 * @str: It's a pointer to the string.
 *
 * Return: An integer with the number of words.
 */
int count_words(char *str)
{
	int i, word_count = 0, str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	return (word_count++);
}


/**
* **strtow - This function splits a string into words.
* @str: It's a pointer to the string.
*
* Description: The function returns a pointer to an array of strings (words).
* Each element of this array should contain a single word, null-terminated.
* The last element of the returned array should be NULL.
* Words are separated by spaces.
* Return: NULL if str == NULL or str == "". NULL if it fails.
*/
char **strtow(char *str)
{
	char **concat_str;
	int i = 0, j = 0, word_len = 0, word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	concat_str = malloc((word_count + 1) * sizeof(char *));
	if (concat_str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			word_len++;
		else
		{
			if (word_len > 0)
			{
				concat_str[j] = malloc((word_len + 1) * sizeof(char));
				if (concat_str[j] == NULL)
					return (NULL);
				strncpy(concat_str[j], &str[i - word_len], word_len);
				concat_str[j][word_len] = '\0';
				j++;
				word_len = 0;
			}
		}
		i++;
	}
	if (word_len > 0)
	{
		concat_str[j] = malloc((word_len + 1) * sizeof(char));
		if (concat_str[j] == NULL)
			return (NULL);
		strncpy(concat_str[j], &str[i - word_len], word_len);
		concat_str[j][word_len] = '\0';
		j++;
	}
	concat_str[j] = NULL;
	return (concat_str);
}
