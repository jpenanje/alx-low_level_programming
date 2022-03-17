#include "main.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: number of times "\" should be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int i, j;
if (n > 1)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
(n == 1)
{
_putchar('\\');
}
_putchar('\n');
}
