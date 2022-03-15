#include "main.h"
/**
 * print_alphabet - Print the letters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
 
for (i = 0; i < 26; i++)
{
_putchar(alpha[i]);
}
_putchar('\n');
}
