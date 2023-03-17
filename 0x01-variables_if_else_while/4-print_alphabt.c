#include <stdio.h>

/**
 * main - The program outputs the entire lowercase alphabet 
 * except for the letters "q" and "e", and then creates a new line.
 *
 * Return: 0 (Success)
 */

int main (void)
{
  char c = 'a';

  while (c <= 'z')
    {
      if (c != 'q' && c != 'e')
	putchar (c);
      c++;
    }
  putchar ('\n');

  return (0);
}
