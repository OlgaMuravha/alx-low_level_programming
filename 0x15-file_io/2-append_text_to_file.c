#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: file pointer
 * @text_content: add string
 * Return: If the function fails or filename is NULL - -1.
 * Otherwise - return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len = 0;

    if (filename == NULL)
        return -1;

    if (text_content != NULL)
    {
        while (text_content[len])
            len++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return -1;

    if (write(fd, text_content, len) == -1)
    {
        close(fd);
        return -1;
    }

    close(fd);
    return 1;
}
