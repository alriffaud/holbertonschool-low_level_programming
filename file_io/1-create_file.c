#include "main.h"

/**
 * create_file - This function creates a file.
 * @filename: It's a pointer to the file to create.
 * @text_content: It's a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t m;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
