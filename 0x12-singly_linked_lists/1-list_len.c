#include "lists.h"

/**
 * list_len - number of elements
 * @h: list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t nelements;

nelements = 0;
while (h != NULL)
{
nelements++;
h = h->next;
}
return (nelements);
}
