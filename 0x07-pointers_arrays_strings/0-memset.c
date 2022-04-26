#include "header.h"

/**
 * _memset - This fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to use when doing fill action
 * @n: bytes of memory area to fill
 * Return : the memory are filled
 */
 
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int a;
    
    for (a = 0; a < n, a++)
    {
        s[a] = b;
    }
    
    return (s);
}
