#include "main.h"

/**
 * main - This program copies the content of a file to another file.
 * @ac: Is the number of arguments passed to the program.
 * @av: Is a one-dimensional array of strings.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t n, m;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	umask(0);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((n = read(fd_from, buffer, 1024)) > 0)
	{
		m = write(fd_to, buffer, n);
		if (m == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
