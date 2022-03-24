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

for (i = (sizeof(n) / sizeof(int)) - 1; i >= 0; i--}
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
}
