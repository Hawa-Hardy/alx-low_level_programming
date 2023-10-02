#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create, a pointer
 * @text_content: NULL pointer string to write to the file
 *
 * Return: If the file exists, truncate it.
 *         -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_descr, written_bytes, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_descr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written_bytes = write(file_descr, text_content, length);

	if (file_descr == -1 || written_bytes == -1)
		return (-1);

	close(file_descr);

	return (1);
}
