#include "main.h"

/**
* print_sign -fonction that prints the sign of a number
*@n: the character to be cheked
*Return: 1 if n is greater than zero, 0 if n is zero,  -1 if n less than 0
*/

int print_sign(int n)
{

if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
