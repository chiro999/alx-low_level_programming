#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX output
 * @filename: file name
 * @letters: the number of letters to be printed
 *
 * Return: number of letters printed or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_o;
	ssize_t file_r, file_w;
	char *mem;

	if (!filename)
		return (0);

	mem = malloc(sizeof(char * letters);
	if(!mem)
		return (0);
	
	file_o = open(filename, O_RDONLY);
	if(file_o == -1)
		return (0);
	file_r = read(file_o, mem, letters);
	file_w = write(STDOUT_FILENO, mem, file_r);

	free(mem);
	close(file_o);
	
	return (file_w);
}

