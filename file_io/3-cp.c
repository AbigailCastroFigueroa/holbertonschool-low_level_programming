#include "main.h"
/**
 * main - Entry port
 * @argc: amount of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd_filefrom, fd_fileto;
	ssize_t word_read;
	char buffer[1024];

	fd_filefrom = open(argv[1], O_RDONLY);
	fd_fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to ");
		exit(97);
	}
	word_read = 1024;
	while (word_read == 1024)
	{
		word_read = read(fd_filefrom, buffer, 1024);
		if (word_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		if ((write(fd_fileto, buffer, word_read) == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd_fileto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fileto);
		exit(100);
	}
	if (close(fd_filefrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_filefrom);
		exit(100);
	}
	return (0);
}


