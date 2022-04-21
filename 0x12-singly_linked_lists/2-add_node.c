#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * of a list
 * @head: head pointer of the list
 * @str: pointer
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nnode;
size_t lstr;

lstr = 0;
while (str[lstr])
{
lstr++;
}

nnode = malloc(sizeof(list_t));
if (nnode == NULL)
{
return (NULL);
}
nnode->len = lstr;
nnode->str = strdup(str);
nnode->next = *head;
*head = nnode;
return (*head);
}
