#include "main.h"



/**
*flips_bits - gets the number of bits to flip to get from n to m
*@a: first number
*@b: last number
*
*Return: the number of flipped bits
*/



unsigned int flips_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int fliped = a ^ b;
	int track = 0;

	while (fliped)
	{
		if (fliped & 1)
			track++;
		fliped >>= 1;
	}
	return (track);
}
