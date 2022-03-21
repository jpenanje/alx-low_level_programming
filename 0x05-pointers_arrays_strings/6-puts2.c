#include "main.h"

/**
 * puts2 - print characters
 * @str: pointer to string
 *
 * Return nothing
 */

void puts2(char *str)
{
int i;

i = 0;
while(i >= 0)
{
if (s[i] != '\0')
{
if (s[i] % 2 == 0)
{
printf("%c", s[i++]);
}
else
{
break;
}
i++;
}
}
