#include "main.h"

/**
 * check_sqrt - function to check the square root of a number
 * @a: The number for which the square root is being checked
 * @b: The current value being tested as the square root
 *
 * Return: The square root of 'a' if found, or -1 if not a perfect square
 */

int check_sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
/* If the square of 'b' is greater than 'a', 'a' is not a perfect square*/
	}
	return (check_sqrt(a, b + 1));
/* Recursively call 'check_sqrt' with an incremented 'b' value*/
}
/**
* _sqrt_recursion - function Returns the natural square root of a number
* @n:parameter of the function
*
* Return: natural square on an int
*/
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 1));
/* Call the helper function 'check_sqrt' to find the square root of 'n'*/
}

