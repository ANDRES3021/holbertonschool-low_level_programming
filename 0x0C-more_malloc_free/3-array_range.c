#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * array_range - ...
  * @min: ...
  * @max: ...
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(*s) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
	{
		s[i] = min;
	}
	return (s);
}
