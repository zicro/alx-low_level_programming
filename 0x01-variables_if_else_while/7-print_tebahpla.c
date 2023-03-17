#include <stdio.h>

/**
 * main - The program uses the putchar function to display the lowercase alphabet in reverse order.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}
