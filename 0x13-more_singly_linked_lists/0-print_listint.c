#include "lists.h"

/**
 * print_listint - prints all the elements
 * of a listint_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int nnodes;

nnodes = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
nnodes++;
}

return (nnodes);
}
