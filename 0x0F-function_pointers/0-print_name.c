#include "function_pointer.h"

/**
 * print_name - Priint a name
 * @name: pointer to name
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
int i;

for (i = 0; name[i] != '\0'; i++)
{
_putchar(name[i]);
}
(*f)(name);
}
