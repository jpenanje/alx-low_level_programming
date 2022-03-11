#include <stdio.h>
/**
 * main - Print the letters of alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ltr;

ltr = 'a';
while (ltr <= 'z')
{
putchar(ltr);
ltr++;
}

putchar('\n');
return (0);
}
