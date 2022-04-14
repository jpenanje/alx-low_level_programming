#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each array element
 * @array: pointer
 * @size: arrray size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}