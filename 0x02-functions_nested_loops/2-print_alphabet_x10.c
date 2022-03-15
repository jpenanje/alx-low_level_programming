#include "main.h"
/**
 * print_alphabet - Print the letters of the alphabet,
 * 10 times in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char l = 'a';
int i;
for (i = 0; i < 10; i++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
