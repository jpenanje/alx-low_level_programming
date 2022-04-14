#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of integers
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
va_start(list, n);

unsigned int i, sum;

sum = 0;
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
