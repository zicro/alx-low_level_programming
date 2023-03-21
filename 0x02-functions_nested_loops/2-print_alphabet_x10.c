#include "main.h"

/**
 * The function "print_alphabet_x10" is designed to output the alphabet
 * in sequence for a total of 10 iterations.
 *
 * Return: void
 */
void	print_alphabet_x10(void)
{
	int	i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
