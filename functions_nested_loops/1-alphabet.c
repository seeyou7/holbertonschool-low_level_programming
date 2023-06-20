#include "main.h"

/**
*main - Prints the alphabet in lowercase followed by\n
*
*Return: Always 0
*/

int main(void)

{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
_putchar ('\n');
return (0);
}
