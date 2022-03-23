#include "main.h"

/**
 * reverse_array - reverse array content
 * @a: pointer to the array
 * @n: number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i;

i = (n - 1);
while (i >= 0)
{
if (i == 0)
{
_putchar(a[i]);
}
else
{
_putchar(a[i]);
_putchar(',');
_putchar(' ');
}
i--;
}
}
