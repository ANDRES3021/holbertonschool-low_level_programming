#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its name
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always zero
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
