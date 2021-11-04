#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print list of the numbers
 * @n: count
 * @separator: char
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator != NULL)
		printf("%d%s", va_arg(ap, int), separator);
		else
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
