#include "main.h"



/**
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 or 0 
 */
 
 
 

int get_endianness(void)
{
	unsigned int t = 1;
	char *endian = (char *)&t;

	if (*endian)
		return (1);
	return (0);

}
