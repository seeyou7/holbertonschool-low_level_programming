#include "main.h"

/**
*print_most_numbers - Prints numbers from 0 to 9
*exept num 2 and 4
*Return: Always
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
}
