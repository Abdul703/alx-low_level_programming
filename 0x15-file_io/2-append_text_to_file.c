#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to a file
 *
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 if success, otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
