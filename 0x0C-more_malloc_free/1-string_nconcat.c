#include "main.h"

/**
 * string_nconcat - concat string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of strings to concatenate
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rslt;
	unsigned int k, l, s1_size, s2_size;

	if (s1 == 0)
	s1 = "";
	if (s2 == 0)
	s2 = "";

	for (s1_size = 0; s1[s1_size]; s1_size++)
		;
	for (s2_size = 0; s2[s2_size]; s2_size++)
		;

	n >= s1_size ? n = s2_size : n;

	rslt = malloc(sizeof(char) * (s1_size + n + 1));
	if (rslt == NULL)
		return (NULL);

	for (k = 0; k < s1_size; k++)
		rslt[k] = s1[k];
	for (l = 0; l < n; l++)
		rslt[k + l] = s2[l];

	rslt[k + l] = '\0';
	return (rslt);
}
