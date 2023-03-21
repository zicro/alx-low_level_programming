#include <unistd.h>

/**
 * main - Outputs a new line character immediately 
 * after printing the string "_putchar".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);
	return (0);
}
