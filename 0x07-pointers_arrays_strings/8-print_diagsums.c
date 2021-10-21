#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print the sum of tow diagonals of square matrix
 *
 *@a: the matrix
 *@size: the size
 *
 *Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int ts;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	ts = size * size;
	for (i = 0; i < ts; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = (size - 1); i <= (ts - size); i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
