#include "main.h"

/**
  * _strlen_recursion - Print a string in reverse
  * @s: the string to return lent
  *
  * Return: strlen
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
		return (_strlen_recursion(s) + 1);
}
