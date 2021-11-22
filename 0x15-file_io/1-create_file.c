#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Pointer.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int create, count;

	create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (create == -1)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; count++)
		continue;
		write(create, text_content, count);
	}
	close(create);
	return (1);
}
