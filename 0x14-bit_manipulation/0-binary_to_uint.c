#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: returns a converted value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec = 0;
int str_len = 0, base = 1;

if (!check(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
dec += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (dec);
}


int check(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}