#include "main.h"

/**
 * _puts - print a string
 * @str: parameter containing the string
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
int i;

i = 0;
while (*str != '\0')
{
puts(str);
i++;
}
putchar('\n');
}
