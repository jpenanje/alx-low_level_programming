#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 * Return nothing
 */

void rev_string(char *s)
{
int l, fs, ls, tmp;

l = 0;
while (s[l] != '\0')
{
l++;
}
fs = 0;
ls = l - 1;
while(fs < ls)
{
tmp = s[fs];
s[fs] = s[ls];
s[ls] = tmp;
fs++;
ls--;
}
}
