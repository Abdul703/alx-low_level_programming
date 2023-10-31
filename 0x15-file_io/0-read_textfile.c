#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 *
 * @filename: pointer to the file name to read
 * @letters: number of letters to read
 *
 * Return: the actual number of letters it could read or -1 if failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t bytesRead, bytesWrite;
	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWrite == -1 || bytesRead != bytesWrite)
		return (0);

	free(buffer);
	fclose(file);

	return (bytesRead);
}
