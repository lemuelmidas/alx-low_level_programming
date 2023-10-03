#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - To append text at the end to the  file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int open_file, write_file, length = 0;

  if (filename == NULL)
    return (-1);

  open_file = open(filename, O_RDWR | O_APPEND);
  if (open_file < 0)
    return (-1);
  if (text_content == NULL)
    {
      close(open_file);
      return (1);
    }

  while (*(text_content + length))
    length++;

  write_file = write(open_file, text_content, length);
  close(open_file);
  if (write_file < 0)
    return (-1);

  return (1);
}
