#include <unistd.h>


/**
* _putchar - Writes the character c to stdout
* @c: The character to print
*
* Return: 1 if success -1 if error
*/
int _putchar(char c)
{
	write(1, &c, 1);
}
