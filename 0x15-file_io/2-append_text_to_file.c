#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: name of the file
 * @text_content: string to be added to the end of the file
 *
 * Return: 1 else -1 if the function fails .
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_o, file_w, i = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++);
	}

	file_o = open(filename, O_WRONLY | O_APPEND);
	if (file_o == -1)
		return (-1);
	file_w = write(file_o, text_content, i);
	if (file_w == -1)
		return (-1);

	close(file_o);

	return (1);
}
