#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for an alphabetic character.
 * @c: the number to be checked
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
