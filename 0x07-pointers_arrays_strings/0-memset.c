#include <main.h>
/**
 * _memset - fill memory with a constant byte
 * @s: memory area to fill 
 * @b: constant byte to fill
 * @n: bytes of memory area to fill 
 * 
 * return: the memory area filled
 */ 
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int a = 0;
        for (; a < n; a++)
        {
            s[a] = b;
        }
        return (s);
}
