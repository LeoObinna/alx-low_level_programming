#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dir;
	ssize_t lenrd, lenwt;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_dir = open(filename, O_RDONLY);
	if (file_dir == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_dir);
		return (0);
	}
	lenrd = read(file_dir, buffer, letters);
	close(file_dir);
	if (lenrd == -1)
	{
		free(buffer);
		return (0);
	}
	lenwt = write(STDOUT_FILENO, buffer, lenrd);
	free(buffer);
	if (lenrd != lenwt)
		return (0);
	return (lenwt);
}
