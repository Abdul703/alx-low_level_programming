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
	char *buffer = malloc(letters + 1);
	FILE *file = fopen(filename, "r");
	ssize_t bytesRead = fread(buffer, 1, letters, file);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';
	printf("%s", buffer);

	free(buffer);
	fclose(file);

	return (bytesRead);
}
