#include <stdio.h>

/**
* main - prints all num of base 16 in lowercase using putchar \n
*
* Return: Always 0
*/

int main(void)
{
int num;

for (num = 0; num >= 16; num++)
putchar (num);
putchar ('\n');
return (0);
}
