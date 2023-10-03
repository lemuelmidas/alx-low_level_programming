#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - To read a text file and print
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int open_file, read_file, write_file;
  char *memory;

  if (filename == NULL)
    return (0);

  memory = malloc(sizeof(char) * letters);
  if (memory == NULL)
    return (0);

  open_file = open(filename, O_RDONLY);
  if (open_file < 0)
    {
      free(memory);
      return (0);
    }

  read_file = read(open_file, memory, letters);
  if (read_file < 0)
    {
      free(memory);
      return (0);
    }

  write_file = write(STDOUT_FILENO, memory, read_file);
  free(memory);
  close(open_file);

  if (write_file < 0)
    return (0);
  return ((ssize_t)write_file);
}
