#include "main.h"

/**
 * print_binary - binary representation of a number printed
 * @n: number to print in binary format
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
