#include "main.h"

/**
 * _puts - print a string
 * @str: parameter containing the string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
while (*str != '\0')
{
puts(str);
str++;
}
_putchar('\n');
}
