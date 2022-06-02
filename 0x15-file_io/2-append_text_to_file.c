#include "main.h"

/**
  * append_text_to_file - append to end.
  * @filename: file name.
  * @text_content: string to append.
  *
  * Description: text appended to exiting file only if it exists.
  * Return: 1 on success and otherwise if not.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (; *(text_content + count) != 0; count++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}

	write(fd, text_content, count);

	close(fd);

	return (1);
}
