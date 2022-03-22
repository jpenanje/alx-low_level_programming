#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int p, i;

  srand(time(NULL));
  i = 0;
  while (i < 2645)
    {
      p = (rand() % 128);
      i += p;
      printf("%c", p);
    }
  printf("%c", 2772 - i);
  return (0);
}
