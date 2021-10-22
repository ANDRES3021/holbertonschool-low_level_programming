#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - Prints the mulriplication of tow args numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always zero
 */
int main(int argc, char *argv[])
{
	int nra, nrb = 0;

	if (argc == 3)
	{
		nra = atoi(argv[1]);
		nrb = atoi(argv[2]);
		printf("%d\n", nra * nrb);
	}
	else
	{
		printf("EROOR\n");
		return (1);
	}
	return (0);
}
