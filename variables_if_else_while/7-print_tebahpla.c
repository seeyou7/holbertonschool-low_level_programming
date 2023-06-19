#include <stdio.h>

/**
*main - Prints alphabet in reverse
*using  putchar 2T
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

for (alpha = 'z'; alpha <= 'a'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
