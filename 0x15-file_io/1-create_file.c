#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - Creates a file.
 * @filename: create files
 * @text_content: write to the file
 * Return: return 1
 * If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, w, len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (len = 0; text_content[len]; len++)
            ;
    }

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    w = write(fd, text_content, len);
    if (w == -1)
    {
        close(fd);
        return (-1);
    }

    if (close(fd) == -1)
        return (-1);

    return (1);
}
