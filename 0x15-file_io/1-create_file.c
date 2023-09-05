#include "main.h"

/**
 * create_file - a program to create a file
 * @filename: File's name
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, else, -1.
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, i, res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != 0; i++)
		;

	res = write(fd, text_content, i);
	close(fd);

	return (res == -1 ? -1 : 1);
}
