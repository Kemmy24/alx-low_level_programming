#include "main.h"

/**
 *  _memcpy - a function that copies memory area
 *  @dest: area where memory is stored
 *  @src: are where memory is copied
 *  @n: bytes
 *
 *  Return: the copied memory with n changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
