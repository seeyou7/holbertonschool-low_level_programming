#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase followed by\n
*description: Prints the alphabet in lowercase followed by\n
*Return: Always 0
*/

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
_putchar ('\n');
}
