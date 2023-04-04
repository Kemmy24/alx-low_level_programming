#include "main.h"

/**
 * _memset - assigns a specific value to a block of memory
 * @s: the starting address of memory that is to be filled
 * @b: the value to be filled
 * @n: number of bytes to be filled
 *
 * Return: new value for n bytes on the changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
