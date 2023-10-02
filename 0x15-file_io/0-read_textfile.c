#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to STDOUT
 * @filename: file chosen
 * @letters: number of letters it should read and print
 * Return: written_bytes- actual number of letters read and printed
 *        0 when function fails or
 *	filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_desc;
	ssize_t written_bytes;
	ssize_t bytes_read;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_desc, buffer, letters);
	written_bytes = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_desc);
	return (written_bytes);
}

