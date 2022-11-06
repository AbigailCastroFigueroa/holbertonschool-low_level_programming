#include "main.h"
/**
 * append_text_to_file - add text to the end of file
 * @filename: text file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
		return (-1);
	if ((write(fd, text_content, strlen(text_content)) == -1))
		return (-1);
	if (text_content == NULL)
		return (1);
	close(fd);
	return (1);
}


