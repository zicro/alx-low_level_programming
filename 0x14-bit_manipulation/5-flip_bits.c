#include "main.h"

/**
 * flip_bits - get the bit numbers
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int cnt = 0;

	while (val)
	{
		cnt++;
		val &= val - 1;
	}

	return (cnt);
}
