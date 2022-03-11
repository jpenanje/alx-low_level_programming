#include <stdio.h>
/**
 * main - Print the letters of alphabet in lower and upper case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ltr, L;

ltr = 'a';
L = 'A';
while (ltr <= 'z')
{
putchar(ltr);
ltr++;
}
while (L <= 'Z')
{
putchar(L);
L++;
}
putchar('\n');
return (0);
}
