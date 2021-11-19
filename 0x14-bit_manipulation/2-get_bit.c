#include "main.h"

/**
 * set_bit - check the code
 * @n: int.
 * @index: int
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if(index > 64)
	  return (-1);
	return ((n >> index) & 1);
}
