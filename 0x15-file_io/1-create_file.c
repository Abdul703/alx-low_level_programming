#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creating a file
 *
 * @filename: name of the file
 * @text_content: text content of the created file
 *
 * Return: 1 if success, otherwise -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		status = write(fd, text_content, strlen(text_content));
		if (status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
