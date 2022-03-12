#include <stdio.h>
/**
 * main - Print the letters of alphabet in lowercase ommiting e and q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ltr;  
  
        for (ltr = 'a'; ltr <= 'z'; ltr++)
        {
                if (ltr == 'e' || ltr == 'q')
                {
                        continue;
                }
                putchar(ltr);
        }
        putchar('\n');
        return (0);
}
