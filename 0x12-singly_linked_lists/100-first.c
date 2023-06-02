#include <stdio.h>

void __attribute__ ((constructor)) first(void);

/**
 * prints - sentences are printed first
 * executing of funcions
 */
void first(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

int main(void)
{ 
    return 0;
}
