#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of cmd arguments
 * @argv: array of cmd arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int result;
if (argc < 2 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
result = argv[1] * argv[2];
printf("%d\n", result);
}
return (0);
}
