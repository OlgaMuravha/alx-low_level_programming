#include <stdio.h>
#include "main.h"
/**
 * set_bit - given index
 * @n: change number
 * @index: bit to sent
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
*n |= mask;
return (1);
}
