#include "main.h"

/**
 * reverse_array - reverse array content
 * @a: pointer to the array
 * @n: number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i, j, tmp;

i = 0; 
j = i - 1;  
while (i < j) 
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;             
j--;         
}
}
