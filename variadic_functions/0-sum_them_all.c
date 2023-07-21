#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: numbers of arguments
 *
 *Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list ap;

/*Declare a variable to hold the argument list*/

	va_start(ap, n);
/*Initialize the argument list with n as the last known fixed argument*/
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
/*Retrieve the next argument from the list and add it to sum*/
	}
	return (sum);

	va_end(ap);
/* Clean up the argument lis*/

}
