#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
struct list_s - singly linked list
@str: string - (malloc'ed string)
@len: length of the string
@next: points to the next node
Description: singly linked list node structure
for Holberton project
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
/**
print_list - Prints all the elements of a linked list.
@h: The head of the linked list.
Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h);
/**

list_len - Calculates the number of elements in a linked list.
@h: The head of the linked list.
Return: The number of nodes in the list.
*/
size_t list_len(const list_t *h);
/**

add_node - Adds a new node at the beginning of a linked list.
@head: The head of the linked list.
@str: The string to be added to the new node.
Return: The address of the new node, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str);
/**

add_node_end - Adds a new node at the end of a linked list.
@head: The head of the linked list.
@str: The string to be added to the new node.
Return: The address of the new node, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str);
/**

free_list - Frees a linked list.
@head: The head of the linked list.
*/
void free_list(list_t *head);
#endif
