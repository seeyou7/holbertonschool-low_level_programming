#include "main.h"

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: the string to reverse
  *
  * Return: Nothing.
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
/* Base case: check if the current character is the null character ('\0')*/
	{
		return;
/*If true, end of string reached, return and terminate the function */
	}
/* Recursive case: call the function recursively with the next character in the string*/
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
		
