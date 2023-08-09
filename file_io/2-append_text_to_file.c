#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: content of the text
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int len;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
		}
		write(op, text_content, len);
	}
	close(op);
	return (1);
}
