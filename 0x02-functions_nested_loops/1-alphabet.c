#include "main.h"
/**
 * print_alphabet - Print the letters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char l[26] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 26; i++)
{
_putchar(l[i]);
}
_putchar('\n');
}
