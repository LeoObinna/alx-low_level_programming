#include "main.h"

/**
 * append_text_to_file - this appends text to the end of a file
 * @filename: the filename
 * @text_content: the added content.
 * Return: 1 on success or if the file exists
 * and -1 if the file does not exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_dir;
	int newletrs;
	int rwr;

	if (!filename)
		return (-1);

	file_dir = open(filename, O_WRONLY | O_APPEND);

	if (file_dir == -1)
		return (-1);

	if (text_content)
	{
		for (newletrs = 0; text_content[newletrs]; newletrs++)
			;

		rwr = write(file_dir, text_content, newletrs);

		if (rwr == -1)
			return (-1);
	}

	close(file_dir);

	return (1);
}
