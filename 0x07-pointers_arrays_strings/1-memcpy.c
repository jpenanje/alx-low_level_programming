#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes
 * @dest: destination
 * @src: source
 * @n: n bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
