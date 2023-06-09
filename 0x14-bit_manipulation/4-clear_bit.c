#include <stdio.h>
#include "main.h"
/**
 * clear_bit - given bit
 * @n: change numbers
 * @index: clea bit
 * Return: return 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n &= ~(1UL << index);
return (1);
}
