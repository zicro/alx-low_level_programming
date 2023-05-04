#include "main.h"

/**
 * clear_bit - bit value to 0 in a specific index
 * @n: the number pointer
 * @index: bit to set index
 * Return: 1 if worked -1 if none
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
