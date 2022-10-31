#include <stdio.h>
#include "holberton.h"
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *		standard output
 * @filename: Fie to be read and printed
 * @letters: bytes of letters we wants to print
 *
 * Return: Actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count, read_file;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		return (0);
	}

	read_file = read(fd, buf, letters);

	if (read_file == -1)
		return (0);

	count = write(STDOUT_FILENO, buf, read_file);
	if (count == -1)
		return (0);
	if (read_file != count)
		return (0);

	free(buf);

	close(fd);

	return (count);
}
