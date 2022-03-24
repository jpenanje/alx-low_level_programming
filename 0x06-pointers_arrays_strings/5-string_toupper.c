#include "main.h"
#include <ctype.h>

/**
 * string_toupper - lowercase letters to uppercase
 * @s: pointer
 *
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
s[i] = toupper(s[i]);
i++;
}
return (s);
}
