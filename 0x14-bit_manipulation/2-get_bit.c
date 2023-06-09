#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns decimal number value
 * @n: used to search numbers
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
unsigned long int mask = (1UL << index);
int bit_val = (n & mask) >> index;
return (bit_val);
}
