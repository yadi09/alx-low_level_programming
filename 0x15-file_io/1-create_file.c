#include "main.h"

/**
 * create_file - ..........
 * @filename: ............
 * @text_content: ............
 * Return: .........
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		length = write(fd, text_content, i);
		if (length != i)
			return (-1);
	}

	close(fd);

	return (1);
}
