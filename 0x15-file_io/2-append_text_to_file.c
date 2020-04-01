#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1, on succes; -1, on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int app, len, sta;

	if (filename == NULL)
		return (-1);
	app = open(filename, O_WRONLY | O_APPEND);
	if (app == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	sta = write(app, text_content, len);
	close(app);
	return (sta == -1 ? -1 : 1);
}
