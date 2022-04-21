#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: head of the list
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *nnode, *tmp;
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
nnode->next = NULL;
tmp = *head;

if (tmp == NULL)
{
*head = nnode;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = nnode;
}
return (*head);
}
