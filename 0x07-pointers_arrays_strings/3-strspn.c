#include "main.h"
#include <string.h>

/**
 * _strspn - number of bytes
 * @s: pointer
 * @accept: substring
 *
 * Return: number of bytes
 */

unsigned int *_strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
