#include "main.h"

/**
 * _print_rev_recursion - print string in reverse order
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
