#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Returns nothing
 */

void puts_half(char *str)
{
int l, n;

l = 0;
while (s[l] != '\n')
{
l++;
}
if (l % 2 == 0)
{
n = l/2;
while (s[n] != '\n')
{
_putchar(s[n]);
n++;
}
}
else
{
n = (l - 1)/2;
while (s[n] != '\0')
{
_putchar(s[n]);
n++;
}
}
}
