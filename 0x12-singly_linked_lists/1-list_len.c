#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
    if (h == NULL)
    {
        return 0;
    }

    size_t n = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        n++;
        current = current->next;
    }

    return n;
}
