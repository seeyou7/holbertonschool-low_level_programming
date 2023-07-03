#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new lin
 *@s: the string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
