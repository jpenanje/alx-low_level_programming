#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of cmd arguments
 * @argv: array of cmd argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int result, j, i;

result = 0;
if (argc == 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
