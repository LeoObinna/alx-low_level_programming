#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <stdlib.h>

/**
 * read_textile - reads a text file and prints it to the POSIX std output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_dir;
	ssize_t lenrd, lenwt;
	char *hedge;

	if (filename == NULL)
		return (0);
	file_dir = open(filename, O_RDONLY);
	if (file_dir == -1)
		return (0);
	hedge = malloc(sizeof(char) * letters);
	if (hedge == NULL)
	{
		close(file_d);
		return (0);
	}
	lenrd = read(file_dir, hedge, letters);
	close(file_dir);
	if (lenrd == -1)
	{
		free(hedge);
		return (0);
	}
	lenwt = write(STDOUT_FILENO, hedge, lenrd);
	free(hedge);
	if (lenrd != lenwt)
		return (0);
	return (lenwt);
}
