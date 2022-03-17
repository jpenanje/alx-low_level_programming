#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the number to be checked
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
