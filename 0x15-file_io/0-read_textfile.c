#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: const char type pointer to file to be read
 * @letters: size_t type
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr, clo;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	rd = read(op, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(0, buffer, rd);
	if (wr == -1)
	{
		return (0);
	}
	clo = close(op);
	if (clo == -1)
	{
		return (0);
	}
	free(buffer);
	return (rd);
}
