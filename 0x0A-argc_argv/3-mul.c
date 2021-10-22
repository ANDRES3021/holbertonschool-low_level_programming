#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char __attribute__((unused)) *argv[])
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
