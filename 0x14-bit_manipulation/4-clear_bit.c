#include "main.h"
/**
*delete_bit - places a bit at a position to 0
*@a: number to be used
*@id: position to be cleared
*
*Return: 1 on success, -1 on fail
*/

int delete_bit(unsigned long int *a, unsigned int id)
{
	if (a == NULL || (id > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*a &= ~(1 << id);
	return (1);
}
