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
while (str[l] != '\0')
{
l++;
}
if (l % 2 == 0)
{
n = l / 2;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
}
else
{
n = (l - 2) / 2;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
}
_putchar('\n');
}
