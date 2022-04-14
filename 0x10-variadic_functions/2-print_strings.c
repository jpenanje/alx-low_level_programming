#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: pointer
 * @n: number of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (separator != NULL)
{
if (i != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
