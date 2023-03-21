#include "main.h"

/**
 * Outputs all the 26 lowercase letters of the alphabet in 
 * sequence, followed by a new line character.
 *
 * return - void
*/
void	print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
