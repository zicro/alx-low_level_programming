#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - check if the string is palindrome
 * @s: string to be checked
 * @size: length of the string
 * Return: 1 if is it palindrome, 0 if none
 */
int check_palindrome(char *s, int size)
{
	if (size <= 1)
		return (1);
	if (*s != *(s + size - 1))
		return (0);
	return (check_palindrome(s + 1, size - 2));
}

/**
 * is_palindrome - check if the string is palindrome
 * @s: string to be checked
 * Return: 1 if it is palindrome, 0 if none
 */
int is_palindrome(char *s)
{
	int size = 0;

	if (*s == '\0')
		return (1);
	size = _strlen_recursion(s);
	return (check_palindrome(s, size));
}
