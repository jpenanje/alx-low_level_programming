#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: byte
 * @n: n bytes of memory area
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
