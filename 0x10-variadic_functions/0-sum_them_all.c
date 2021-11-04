#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, t;

	if (n == 0)
		return (0);


	va_start(ap, n);
	t = 0;
	for (i = 0; i < n ; i++)
	{
		t += va_arg(ap, int);
	}
	va_end(ap);
	return (t);
}