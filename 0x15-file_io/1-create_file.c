#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * _strlen - returns len of string
 * @s: string
 * Return: len of str
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * create_file - creates a file
 * created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions
 * if the file already exists, truncate it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return:  1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;/*file descriptor*/
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
