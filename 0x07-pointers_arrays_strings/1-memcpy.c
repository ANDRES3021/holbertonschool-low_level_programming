#include "main.h"

/**
 * _memcpy - copy memory areaa
 *@dest: dest memory area
 *@src: source memory area
 *@n: bytes memory area to copy
 *
 *Return from area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int rem = 0;
for (; rem < n; rem++)
{
dest[rem] = src[rem];
}
return (dest);
}
