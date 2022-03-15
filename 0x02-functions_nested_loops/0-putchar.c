#include "main.h"

/**
 * main - Prints the message _putchar with a function without puts of printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char c[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	        _putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
