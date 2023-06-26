#include "main.h"

/**
 *_puts - function that a string followed by new line
 *@str: parameter of the function
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}

