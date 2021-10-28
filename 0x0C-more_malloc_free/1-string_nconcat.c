#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, k;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;
	if (n >= j)
	{
		k = i + j;
	}
	else
		k = i + n;
	s = malloc(sizeof(char) * (k + 1));
	if (s == NULL)
		return (NULL);
	for (l = 0; s1[l] != '\0'; l++)
	{
		s[l] = s1[l];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		s[i + l] = s2[l];
	}
	s[i + l] = '\0';
	return (s);
}
