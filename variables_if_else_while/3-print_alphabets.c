#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */

int main(void)
{
char C;
char l;

for (l = 'a'; l <= 'z'; l++)
putchar(l);
for (C = 'A'; C <= 'Z'; C++)
putchar(C);
putchar('\n');
return (0);
}
