#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: number whose last digit is to be printed
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int l;
l = n % 10;
if (l > 0)
{
_putchar(l);
return (l);
}
else
{
_putchar(-l);
return (-l);
}
}
