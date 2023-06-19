#include <stdio.h>

/**
*main -Print alphabet except e and q
*
*Return: Always 0 (Success)
*/

int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph != 'e' && alph != 'q')
putchar(alph);
}
putchar('\n');
return (0);
}
