#include "main.h"
/**
 * _strchr - Function that shearch a charcter in string
 * @s: the string to search in
 * @c: the charcter to search
 * Return: a sting that begin with a
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

