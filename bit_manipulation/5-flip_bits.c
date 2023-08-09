#include "main.h"

/**
 * flip_bits - return the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: number
 * @m: other number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int count = 0;

	while (xor)
	{
		xor &= (xor - 1);
		count++;
	}
	return (count);
}
