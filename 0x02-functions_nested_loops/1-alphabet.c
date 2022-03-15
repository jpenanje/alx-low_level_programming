#include "main.h"
/**
 * print_alphabet - Print the letters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char l = 'a';
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
