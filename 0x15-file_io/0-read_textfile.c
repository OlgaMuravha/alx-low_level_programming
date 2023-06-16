#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file being read.
 * @letters: Number of letters to be read.
 * Return: Number of bytes read and printed on success, 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t w = 0, t;
char *buf = malloc(sizeof(char) * letters);
if (filename == NULL || buf == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}
t = read(fd, buf, letters);
if (t == -1)
{
free(buf);
close(fd);
return (0);
}
w = write(STDOUT_FILENO, buf, t);
if (w == -1)
w = 0;
free(buf);
close(fd);
return (w);
}
