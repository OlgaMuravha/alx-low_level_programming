#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(void);
void close_file(FILE *file);

/**
 * create_buffer - allocates buffer
 * Return: an allcaated buffer
 * char *create_buffer(void)
{
    char *buffer = malloc(sizeof(char) * 1024);
    if (buffer == NULL)
    {
        fprintf(stderr, "Error: Can't allocate buffer\n");
        exit(99);
    }
    return buffer;
}

/**
 * close_file - Closes a file.
 * @file: The file pointer to be closed.
 */
void close_file(FILE *file)
{
    if (fclose(file) != 0)
    {
        fprintf(stderr, "Error: Can't close file\n");
        exit(100);
    }
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
    FILE *file_from, *file_to;
    char *buffer;
    size_t bytes_read, bytes_written;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buffer();

    file_from = fopen(argv[1], "r");
    if (file_from == NULL)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        free(buffer);
        exit(98);
    }

    file_to = fopen(argv[2], "w");
    if (file_to == NULL)
    {
        fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
        free(buffer);
        fclose(file_from);
        exit(99);
    }

    while ((bytes_read = fread(buffer, sizeof(char), 1024, file_from)) > 0)
    {
        bytes_written = fwrite(buffer, sizeof(char), bytes_read, file_to);
        if (bytes_written != bytes_read)
        {
            fprintf(stderr, "Error: Write to file %s failed\n", argv[2]);
            free(buffer);
            fclose(file_from);
            fclose(file_to);
            exit(99);
        }
    }

    free(buffer);
    close_file(file_from);
    close_file(file_to);

    return 0;
}
