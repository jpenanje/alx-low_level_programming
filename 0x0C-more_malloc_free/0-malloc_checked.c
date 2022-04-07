#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: amount of bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
char *s;

s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (s);
}
