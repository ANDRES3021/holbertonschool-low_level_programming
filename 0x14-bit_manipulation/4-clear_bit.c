#include "main.h"

/**
 * clear_bit - check the code
 * @n: int.
 * @index: int
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
