#include "main.h"

/**
*_puts - function that print every other character
*of a string starting with the first character + \n output is 02468
*instead of 123456789
*@str: parameter of the function
*
* Return: Always 0.
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str += 2;
	}
	_putchar ('\n');
}
