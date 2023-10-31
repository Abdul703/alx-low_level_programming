#include <stdio.h>
#include <stdlib.h>
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
	ssize_t bytesRead;
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

	if (bytesRead == 0 && ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';
	fprintf(stderr, "%s", buffer);

	free(buffer);
	fclose(file);

	return (bytesRead);
}
