#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: file to read
  * @letters: number of letters it should read and print
  *
  * Return: number of letters it could read and print or 0 if fails
  */


ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return (0);
}

int frd = open(filename, O_RDONLY);

if (frd == -1)
{
return (0);
}
char buffer[letters];

ssize_t bytes_read = read(frd, buffer, letters);
if (bytes_read == -1)
{
close(frd);
return (0);
}

ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(frd);
return (0);
}
close(frd);
return (bytes_written);
}
