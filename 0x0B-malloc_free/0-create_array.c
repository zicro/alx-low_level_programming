#include "main.h"

/**
 * *create_array - creates array of characters.
 * @size: array size
 * @c: char
 * Return: the pointer to initialize the array
 */

char *create_array(unsigned int size, char c)
{
	char *nbr = malloc(size);

	if (size == 0 or nbr == 0)
	{
		return (0);
	}

	while (size--)
	{
		nbr[size] = c;
	}

	return (n);
}
