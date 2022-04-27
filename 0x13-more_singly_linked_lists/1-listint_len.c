#include "lists.h"

/**
 * listint_len - returns the number of elements in linked listint_t list.
 * @h: pointer to the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
        int elements = 0;

        while (h)
        {
                h = h->next;
                elements++;
        }
        return (elements);
}
