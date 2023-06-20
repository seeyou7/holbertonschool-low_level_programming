#include "main.h"

/**
 *_islower - fonction that checks for lowercase character
 *@c: the character to be cheked.
 *
 *Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{

char lower = 'a';
while (lower <= 'z')
{
if (lower == c)
return (1);
lower++;
}
return (0);
}

