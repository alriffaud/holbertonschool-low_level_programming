#include "main.h"

/**
 * read_textfile - This function reads a text file and prints it to the POSIX
 * standard output.
 * @filename: It's a pointer to the file.
 * @letters: It's the number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print. It returns 0
 * if: the file can not be opened or read, filename is NULL or write fails or
 * does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, m;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	n = read(fd, buff, letters);
	if (n == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	m = write(STDOUT_FILENO, buff, n);
	if (m == -1 || m != n)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (n);
}
