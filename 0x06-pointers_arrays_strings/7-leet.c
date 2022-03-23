#include "main.h"

/**
 * leet - encoding a string
 * @s: pointer
 *
 * Return encoded string
 */

char *leet(char *s)
{
  int i;

  i = 0;
  while (*(s + i) != '\0')
    {
      if (*(s + i) == 'a' || *(s + i) == 'A')
	{
	  *(s + i) = 4 + 48;
	}
      i++;
    }
}
