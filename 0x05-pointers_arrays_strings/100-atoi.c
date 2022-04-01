#include <stdlib.h>

/**
* _atoi - convert string to integer
* @s: pointer to string
*
* Return: Always 0 (Success)
*/

int _atoi(char *s)
{
unsigned int count, size, oi, pn, m, i;

count = 0, size = 0, oi = 0, pn = 1, m = 1;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
{
break;
}
if (*(s + count) == '-')
{
pn *= -1;
}
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
{
m *= 10;
}
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
oi = oi + ((*(s + i) - 48) * m);
m /= 10;
}
return (oi *pn);
}
