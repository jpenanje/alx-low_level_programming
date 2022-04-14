#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
  if (n == 0)
    {
      return (0);
    }
  
  va_list list;
  unsigned int i, sum;

  va_start(list, n);

  sum = 0;
  for (i = 0; i < n; i++)
    {
      sum += va_arg(list, int);
    }

  va_end(list);
  return (sum);
}
