#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * of a list
 * @head: head pointer of the list
 * @str: pointer
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nnode;
int lstr;
  
lstr = 0;
while (str != '\0')
lstr++;
  
nnode = malloc(sizeof(list_t));
if (nnode == NULL)
return (NULL);
nnode->len = lstr;
nnode->str = strdup(str);
nnode->next = *(head);
*head = nnode;
return (nnode);
}
