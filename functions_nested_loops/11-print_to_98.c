#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue; /* it tells the prog to continue the 1st for boocle */
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue; /* it tells the prog to continue the 1st for boocle */
			printf(", ");
		}
		printf("\n");
	}
}
