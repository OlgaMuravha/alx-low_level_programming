#include <stdio.h>
#include "main.h"

/**
 *get_endianness - checks if machine is endianness
 *Return: return 0
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c)
return (1);
else
return (0);
}
