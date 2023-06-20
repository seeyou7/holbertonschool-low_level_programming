#include "main.h"

/**
*_abs - function that computes the absolute value of an integer
*@n: parameter of function
*
*Return: return integer
*/

int _abs(int n)
{

if (n > 0)
return (n);
else if (n == 0)
return (0);
else
return (n * (-1));
}
