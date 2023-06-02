#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node
 * @head: pointer for list_t 
 * @str: string for
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new;
        list_t *temp;

        unsigned int len = strlen(str);

        new = malloc(sizeof(list_t));
        if (new == NULL)
                return NULL;

        new->str = strdup(str);
        new->len = len;
        new->next = NULL;

        if (*head == NULL)
        {
                *head = new;
                return new;
        }

        temp = *head;
        while (temp->next != NULL)
                temp = temp->next;

        temp->next = new;
        return new;
}
