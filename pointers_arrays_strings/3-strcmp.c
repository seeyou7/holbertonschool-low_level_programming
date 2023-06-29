#include "main.h"

/**
 *_strcmp - function that compares two strings
 *@s1: parameter of the function
 *@s2: parameter of the function
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
