#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums integers
 * @n: number of integers
 *
 * Return: sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list list;
va_start(list, n);

int i, sum;

sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
