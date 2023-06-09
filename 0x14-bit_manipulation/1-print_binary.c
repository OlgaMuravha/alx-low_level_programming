#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary
 * @n: print number in binary
 */
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
int i;
unsigned long int mask = 1UL << 63;
for (i = 0; i < 64; i++)
{
if (n & mask)
_putchar('1');
else
_putchar('0');
mask >>= 1;
}
}
