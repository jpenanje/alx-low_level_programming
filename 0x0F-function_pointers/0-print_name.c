#include "function_pointer.h"

/**
 * print_name - Print a name
 * @name: pointer to name
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
