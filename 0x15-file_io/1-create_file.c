#include "main.h"
/**
 * create_file - This creates a file
 * @filename: the filename
 * @text_content: the content written in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_dir;
	int newletrs;
	int rwr;

	if (!filename)
		return (-1);

	file_dir = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_dir == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (newletrs = 0; text_content[newletrs]; newletrs++)
		;

	rwr = write(file_dir, text_content, newletrs);

	if (rwr == -1)
		return (-1);

	close(file_dir);

	return (1);
}
