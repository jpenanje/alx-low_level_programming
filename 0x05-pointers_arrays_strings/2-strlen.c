#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: function parameter
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int l;

l = 0;
while (s != '\0')
{
l++;
}
return (l);
}
