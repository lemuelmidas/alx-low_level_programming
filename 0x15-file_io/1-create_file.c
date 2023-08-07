#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - to create a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: -1 if file can not be created, nor written,
 * nor write fails or 1, if successful
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (open_file < 0)
		return (-1);

	while (text_content && *(text_content + length))
		length++;

	write_file = write(open_file, text_content, length);
	close(open_file);
	if (write_file < 0)
		return (-1);
	return (1);
}
