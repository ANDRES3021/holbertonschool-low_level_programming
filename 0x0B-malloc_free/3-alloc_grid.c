#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  *
  * Return: ...
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **) malloc((height) * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc((width) * sizeof(int));
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
