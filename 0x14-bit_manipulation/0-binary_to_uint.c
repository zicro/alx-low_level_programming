#include "main.h"

/**
 * binary_to_uint - binary number converted to unsigned
 * @b: pointer to string 0 and 1 for chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	for (n = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		n <<= 1;
		n += *b - '0';
	}
	return (n);
}
