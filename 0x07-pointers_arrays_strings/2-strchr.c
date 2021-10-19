#include "main.h"

/**
 *_strchr - locate caracter in string
 *@s: source string
 *@c: character to find
 *
 *Return: the string for charactr found
 */
char *_strchr(char *s, char c)
{
int c1 = 0, c2;
while (s[c1])
{
c1++;
}
for (c2 = 0; c2 <= c1; c2++)
{
if (c == s[c2])
{
s = s + c2;
return (s);
}
}
return (0);
}
