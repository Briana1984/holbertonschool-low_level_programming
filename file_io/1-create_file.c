#include "main.h"

/**
  * create_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */

int create_file(const char *filename, char *text_content)
{
	int len;
	int fd;
	size_t n;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = write(fd, text_content, len);
		if ((int)n == -1 || (int)n < len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
