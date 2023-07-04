#include "main.h"

/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be checked
 *
 * Return:int value
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
/*Check if n is 1 or negative*/
	{
		return (0);
/*Return 0 since 1 and negative numbers are not prime*/
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
/* Check if n is divisible by 2, 3, 5, or 7  */
		return (0);
	}
/*Return 1 since n is divisible by 2, 3, 5, or 7 (not prime)*/
	return (1);
/*Return 1 by default (assuming it should be return 1 when n is prime)*/
}
