#include "main.h"

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: the string to reverse
  *
  * Return: Nothing.
  */

void _print_rev_recursion(char *s)
{
	while (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
		
