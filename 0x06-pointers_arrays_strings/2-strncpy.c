#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 *
 * Return copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
