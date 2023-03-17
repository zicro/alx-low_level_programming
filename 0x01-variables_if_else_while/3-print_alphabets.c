#include <stdio.h>

/**
 * main - The program displays the lowercase alphabet, followed by the uppercase alphabet, and then creates a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
		putchar(c++);

	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');

	return (0);
}
