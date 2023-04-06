#include "main.h"

/**
*print_binary - it will display the binary representation of a number
*@a: number to be displayed
*
*Return: returns a void
*/

void print(unsigned long int a)
{
if (a > 1)
	print(a >> 1);

_putchar((a & 1) + '0');
}
