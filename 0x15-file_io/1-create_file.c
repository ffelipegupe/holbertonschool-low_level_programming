#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1, on succes; -1, on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int new, len, sta;

	if (filename == NULL)
		return (-1);
	new = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	sta = write(new, text_content, len);
	if (close(new) == -1)
		return (-1);
	return (sta == -1 ? -1 : 1);
}
