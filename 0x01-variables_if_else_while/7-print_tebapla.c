#include <stdio.h>
/**
 * main - Print alphabet in reverse in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l;

for (l = 'z'; l >= 'a'; l--)
{
putchar(l);
}
putchar('\n');
return (0);
}
