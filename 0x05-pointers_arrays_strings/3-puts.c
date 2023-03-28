#include "main.h"
#include <unisted.h>
/**
 * _puts - prints a string to the stdout
 * @str: string
 * Return: lenght of string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
