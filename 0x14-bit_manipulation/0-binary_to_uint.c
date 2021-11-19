#include "main.h"
/**
* binary_to_uint - Function that converts a binary number to an unsigned int.
* *@b: pointer to string of 0 and 1
* Return: Converted number or 0 if more chars not 0 or 1 or 1 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int expo = 1, add = 0, count = 0;

	if (b == NULL)
	{
		return(0);
	}

	while(b[count] != '\0')
	{
		count++;
	}
	for (count = count - 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return(0);
		}    
		add = add + (b[count] - '0') * expo;
		expo = expo * 2;
	}
	return(add);
}
