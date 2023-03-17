#include <stdio.h>

/**
 * main - The program outputs all the numbers of base 16 in lowercase, and then creates a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		putchar((num % 16 < 10) ? (num % 16 + '0') : (num % 16 - 10 + 'a'));
	putchar('\n');

	return (0);
}
