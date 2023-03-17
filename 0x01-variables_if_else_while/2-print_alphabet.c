#include <stdio.h>

/**
 * main - The program outputs the entire lowercase alphabet and then creates a new line.  
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
