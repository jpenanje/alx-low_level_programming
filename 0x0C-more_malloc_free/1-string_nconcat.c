#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: amount of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *p;

  if (p == NULL)
    {
      return (NULL);
    }
  if (n >= strlen(s2))
    {
      p = malloc(sizeof(s1) + sizeof(s2));
    }
  else
    {
      p = malloc(sizeof(s1) + (sizeof(s2) - n));
    }
}
