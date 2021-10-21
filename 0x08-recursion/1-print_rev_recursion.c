#include "main.h"

/**
 *_print_rev_recursion - Print a string in reverse
 *@s: the string to reverse
 *
 *Return: Noting.
 */
void _print_rev_recursion(char *s)
{
	while (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
