#include "main.h"
/**
*rev_string - function that reverse a string  followed by n\
*@s: parameter of the function
* Return: Always 0.
*/

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	  while (s[len] != '\0')
        {
                len++;
        }

	for(i = len - 1; i >= len / 2; i--)
	{
		temp = (s[i]);
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
