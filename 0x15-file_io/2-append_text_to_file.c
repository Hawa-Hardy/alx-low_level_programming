#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file
 * @text_content: NULL string to add at the end of the file
 *
 * Return: If filename is NULL, -1
 *         If the file does not exist, or user lacks write permission -1
 *         1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int written_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	written_bytes = write(file_desc, text_content, len);

	if (file_desc == -1 || written_bytes == -1)
		return (-1);

	close(file_desc);

	return (1);
}
