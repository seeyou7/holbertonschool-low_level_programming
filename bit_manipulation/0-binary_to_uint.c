#include "main.h"
/**
* binary_to_uint - Converts a binary string
* @b: Pointer to a binary string
*
* Return: The converted unsigned integer, or 0 if the string is NULL or
* contains characters other than 0 or 1.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		output = (output << 1) + (b[i] - '0');
	}
	return (output);
}
