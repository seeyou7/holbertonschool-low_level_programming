#include <stdio.h>

/**
* main - prints all num of base 16 in lowercase using putchar \n
*
* Return: Always 0
*/

int main(void)
{
char num;
char alpha;

for (num = '0'; num >= '9'; num++)
putchar (num);
for (alpha = 'a'; alpha >= 'f'; alpha++)
putchar (alpha);
putchar ('\n');
return (0);
}
