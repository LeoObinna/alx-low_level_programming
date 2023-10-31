#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - this copies the content of one file to another
 * @argc: this is the argument count
 * @argv: This is the argument passed
 * Return: 1 if its success, while exit is not
 */
int main(int argc, char *argv[])
{
	int src, destn, n_read = 1024, wrote, close_src, close_destn;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	destn = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(destn, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(destn, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_destn = close(destn);
	check_IO_stat(close_destn, destn, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - program that checks if a file can be opened or closed
 * @stat: the file descriptor on file to be opened
 * @filename: the name of the file
 * @mode: The closing or opening
 * @fd: the file descriptor
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not read from the file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not write to %s\n", filename);
		exit(99);
	}
}

