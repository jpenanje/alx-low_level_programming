#include "main.h"
#include <math.h>

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
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
