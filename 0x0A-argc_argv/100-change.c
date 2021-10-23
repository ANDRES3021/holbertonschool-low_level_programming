#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints minimum number of coins to make change for an amount of money
 *@argc: number of arguments passed to the function
 *@argv: argument vector of pointers to strings
 *Return: 0 if errors, else
 */
int main(int argc, char *argv[])
{
	int coins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; coins > 0; i++)
	{
		if (coins >= 25)
		{
			coins = coins - 25
				}
		else if (coins >= 10)
		{
			coins = coins - 10;
		}
		else if (coins >= 5)
		{
			coins = coins - 5;
		}
		else if (coins >= 2)
		{
			coins = coins - 2;
		}
		else if (coins >= 1)
		{
			coins = coins - 1;
		}
	}
	printf("%d\n", i);
	return (0);
}
