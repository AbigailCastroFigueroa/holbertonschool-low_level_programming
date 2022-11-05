#include "main.h"
/**
 * create_file - function that create a file
 * @filename: text file
 * @text_content: content of the file
 *
 * Return: 1 for success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (!filename)
		return (-1);
	write (fd, text_content, strlen(text_content));
	if (!text_content)
		return (0);

	close(fd);
	return (1);
}
