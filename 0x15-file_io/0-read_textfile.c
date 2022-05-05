#include "main.h"

/**
 * read_textfile - read and print a text file to POSIX
 * @filename: file name
 * @letters: number of letters
 *
 * Return: number of letters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
        ssize_t	nread, nprnt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);

	nread = read(fd, buf, letters);
	if (nread < 0)
		return (0);

	nprnt = write(STDOUT_FILENO, buf, nread);

	free(buf);
	close(fd);

	if (nprnt < 0)
		return (0);
	return (nprnt);
}

