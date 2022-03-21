#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: parameter
 *
 * Return nothing
 */

void print_rev(char *s)
{
int l;

l = 0;
while (*s != '\0')
{
l++;
s++;
}
l -= 1;
for (; l >= 0; l--)
{
_putchar(s[l]);
}
}
