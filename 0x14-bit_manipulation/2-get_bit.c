#include "main.h"
/**
*get_bit - get the value of a bit at the given index
*@a: the number
*@id: starting from 0 of the bit required
*
*Return: returns a converted value
*/

int getting_bit(unsigned long int a, unsigned int id)
{
	if (id > 63)
		return (-1);

	return ((a >> id) & 1);
}
