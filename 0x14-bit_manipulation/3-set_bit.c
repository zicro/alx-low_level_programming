#include "main.h"

/**
 * set_bit - sets bit value to 1 at specific index
 * @n: number pointer for bit set
 * @index: the bit set index
 * Return: 1 if ok -1 if none
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
