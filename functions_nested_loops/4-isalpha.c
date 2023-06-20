#include "main.h"
/**
*decription: _isalpha - fonction that checks for alphabetic character
*@c: the character to be cheked.
*
*Return: 1 if is a letter  lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}
