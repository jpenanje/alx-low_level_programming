#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a line
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{
num = va_arg(list, int);
printf("%d", num);
if (separator != NULL)
{
if (i != (n -1))
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
