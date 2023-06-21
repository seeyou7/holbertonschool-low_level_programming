#include "main.h"

/**
 * times_table - function that prints 9 tables starting with 0
 */

void times_table(void)
{

int L1, L2, X;

for (L1 = 0; L1 <= 9; L1++)
{
_putchar ('0');

for (L2 = 0; L2 < 10; L2++)
{
X = L1 * L2;
_putchar (',');
_putchar (' ');
if (X < 10)
{
_putchar (' ');
_putchar (X +'0');
}
else
{
_putchar ((X / 10) + '0');
_putchar ((X % 10) + '0');
}
}
_putchar ('\n');
}
}
