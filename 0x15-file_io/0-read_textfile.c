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
	char *buffer;
	int fop;
	size_t fread, check;

	if (!filename || !letters)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);
	/* open file */
	fop = open(filename, O_RDONLY);
	if (fop == -1)
	{
		free(buffer);
		return (0);
	}
	/* read file up to "letters" amount of charachters */
	fread = read(fop, buffer, letters);
	if (fread < 1)
	{
		free(buffer);
		close(fop);
		return (0);
	}
	/* write content read */
	check = write(STDOUT_FILENO, buffer, fread);

	free(buffer);
	close(fop);

	if (!check || check != fread)
		return (0);

	return (fread);
}
