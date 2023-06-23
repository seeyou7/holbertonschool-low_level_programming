#include "main.h"

/**
 *_isupper - fonction that checks for upperchar character
 *@c: the character to be cheked.
 *
 *Return: 1 if character is uppercase, 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
