#include "main.h"
/**
 * read_textfile - function that read a text file and print to stdout
 * @filename: text file
 * @letters: amount of letters that should read and print
 *
 * Return: the amount of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_it, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	read_it = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, read_it);
	free(buffer);
	close(fd);
	return (read_it);
}
