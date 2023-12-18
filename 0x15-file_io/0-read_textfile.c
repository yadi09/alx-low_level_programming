#include "main.h"

/**
 * read_textfile - function
 * @filename: ...........
 * @letters: .....
 * Return: .........
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, length;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	i = read(fd, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[i] = '\0';
	close(fd);
	length = write(STDOUT_FILENO, buffer, i);
	if (length < 0)
	{
		free(buffer);
		return (0);
	}
free(buffer);
return (length);
}
