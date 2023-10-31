#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - main Entry
 *
 * @argc: number of arguments passed
 * @argv: list of arguments passed
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copy file content to another file
 *
 * @from_file: file to copy from
 * @to_file: file to copy to
 *
 * Return: void
 */
void copy_file(const char *from_file, const char *to_file)
{
	int from_fd, to_fd;
	ssize_t bytes_read;
	char buffer[BUFSIZE];

	from_fd = open(from_file, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}

	to_fd = open(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", to_file);
		exit(99);
	}

	while ((bytes_read = read(from_fd, buffer, BUFSIZE)) > 0)
	{
		if (write(to_fd, buffer, bytes_read) == -1)
	{
			dprintf(2, "Error: Can't write to file %s\n", to_file);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}

	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
}

