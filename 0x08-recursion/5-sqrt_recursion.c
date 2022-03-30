#include "main.h"
#include <math.h>

/**
 * _sqrt - square root recursion
 * @n: number
 * @i: root
 * Return: square root
 */
int _sqrt(int n, int i)
{
if (n < 0)
{
return (-1);
}
if ((i * i) > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates square root
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
