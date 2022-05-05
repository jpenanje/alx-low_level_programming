#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdwrite, len;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, 0_RDWR | 0_CREAT | 0_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	for (len = 0; text_content && *(text_content + len); len++)
		;

	fdwrite = write(fd, text_content, len);
	close(fd);
	if (fdwrite < 0)
		return (-1);
	return (1);
}
