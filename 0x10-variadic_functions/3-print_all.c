#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all:-function that prints n of strings separated by a character
 *
 *@format:datatype
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *p;
	va_list ap;

	va_start(ap, format);
	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			p = va_arg(ap, char *);
			p ? printf("%s", p) : printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
}
