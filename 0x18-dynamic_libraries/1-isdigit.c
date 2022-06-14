#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for lowercase character.
 * @c: the number to be checked
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
