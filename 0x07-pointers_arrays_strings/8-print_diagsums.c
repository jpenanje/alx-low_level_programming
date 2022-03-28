#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagonal
 * @a: pointer
 * @size: array size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i, j, sum;

sum = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum += a[i][j];
}
}
}
}
