#include "main.h"

/**
 *factorial - function Calculate the factorial of a number
 *@n : the number to calculate the factorial
 *
 *Return: factorial on n
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
