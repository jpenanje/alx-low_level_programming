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
if (i != 0)
{
printf("%d", a[i]);
}
else
{
printf(", ", a[i]);
}
i--;
}
}
