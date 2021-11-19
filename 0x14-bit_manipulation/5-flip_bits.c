#include "main.h"

/**
 * flip_bits - check the code
 * @n: int.
 * @m: int
 * Return: res
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	unsigned int ret = 0;

	c = n ^ m;

	for (; c != 0; c = (c >> 1))
		ret += (c & 1);
	return (ret);
}
