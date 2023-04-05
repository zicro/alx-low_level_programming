#include "main.h"

/**
 * wildcmp - compare two string and return 1 if the strings is
 *  identical if none return 0
 * @s1: string One
 * @s2: string two
 * Return: 1 if they are the same, 0 if don't
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
