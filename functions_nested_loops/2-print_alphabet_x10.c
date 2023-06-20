#include "main.h"

/**
* print_alphabet_x10 - truc
* Description: prints 10 times alphabet
* Return: void
*/

void print_alphabet_x10(void)
{

int i = 1;
char alpha;

while (i <= 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
_putchar ('\n');
i++;
}
}
