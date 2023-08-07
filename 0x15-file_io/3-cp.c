#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int descriptor);

/**
 * close_file - Closes file descriptors.
 * @descriptor: The file descriptor to be closed.
 */
void close_file(int descriptor)
{
	int close_check;

	close_check = close(descriptor);

	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *mem;

	mem = malloc(sizeof(char) * 1024);

	if (!mem)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (mem);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_src, file_des, file_r, file_w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	file_src = open(argv[1], O_RDONLY);
	file_r = read(file_src, buffer, 1024);
	file_des = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (file_r > 0)
	 {
		if (file_src == -1 || file_r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		file_w = write(file_des, buffer, file_r);
		if (file_src == -1 || file_w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		file_r = read(file_src, buffer, 1024);
		file_des = open(argv[2], O_WRONLY | O_APPEND);

	} 

	free(buffer);
	close_file(file_src);
	close_file(file_des);

	return (0);
}
