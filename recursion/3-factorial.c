#include "main.h"

/**
 *int factorial - function that return factorial of a num
 *@n : parameter of the function
 *
 * Return : factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
