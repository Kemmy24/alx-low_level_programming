#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 * Return: 1 when successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
