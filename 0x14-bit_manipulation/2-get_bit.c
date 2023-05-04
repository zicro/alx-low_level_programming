#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: get bit from
 * @index: the bit to get
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
