#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@r: number being tested
 * Return: Always 0.
 */

int print_last_digit(int r)
{

	r %= 10;

	if (r < 0)
		r *= -1;

	_putchar(r + '0');
	return (r);
}
