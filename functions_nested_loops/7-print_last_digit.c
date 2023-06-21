#include "main.h"

/**
*print_last_digit - function that print last digit of a number
*@n: parameter of function
*
*Return: return value of the last digit
*/

int print_last_digit(int n)
{

n = n % 10;
if (n < 0)
{
n = n *(-1);
_putchar (n + '0');
return (n);
}
_putchar (n + '0');
return (n);
}


