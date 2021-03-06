#include "lists.h"

/**
 * print_list - print elements of list_t
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nnodes;

nnodes = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
nnodes++;
}
return (nnodes);
}
