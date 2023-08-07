#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of the file
 * @text_content: content written to the file
 *
 * Return: 1 or else -1 if the function fails
 */

int create_file(const char *filename, char *text_content)
{
	int file_o, file_w, i = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++;
	}

	file_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if(file_o == -1)
		return (-1);
	file_w = write(file_o, text_content, i);
	if(file_w == -1)
		return (-1);

	close(file_o)

	return (1);
}
