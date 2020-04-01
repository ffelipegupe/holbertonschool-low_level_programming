#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, if the file
 * can not be opened or read, return 0; if filename is NULL, return 0, if
 * write fails or does not write the expected amount of bytes, return 0.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt, tot, sta;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	txt = open(filename, O_RDONLY);
	if (txt == -1)
		return (0);
	tot = 0;
	sta = 1;
	while (letters > BUFSIZE && sta != 0)
	{
		sta = read(txt, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, sta);
		tot = tot + sta;
		letters -= BUFSIZE;
	}
	sta = read(txt, buffer, letters);
	write(STDOUT_FILENO, buffer, sta);
	tot += sta;
	close(txt);
	return (tot);
}
