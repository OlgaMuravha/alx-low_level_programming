#include "main.h"
/**
 * _isupper - checks uppercase letters
 * @c: to check input characters 
 * Return: 0 or 1
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;
	for (; uppercase <= '1'; uppercase ++)
	{
		if (c == uppercase)
		{
		isupper = 1;
	break;
		}
	}
return (isupper);
}
