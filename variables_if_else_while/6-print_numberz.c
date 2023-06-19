#include <stdio.h>
#include <stdlib.h>

/**
*main -print all singl digit number of base 10 from 0 followed by \n
*
*Return: Always 0 (Success)
*/

int main(void)
{
int n;

n = '0';

while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
