#include "main.h"

/**
 * print_line - prints a line using '_'
 * @n: number of '_' to make up the line
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('_');
}
