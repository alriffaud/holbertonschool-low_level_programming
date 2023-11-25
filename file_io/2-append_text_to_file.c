#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: It's a pointer to the file to create.
 * @text_content: It's a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t m;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		m = write(fd, text_content, strlen(text_content));
		if (m == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
