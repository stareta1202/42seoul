#include <string.h>
#include "libft.h"

void *ft_memove(void *s1, const void *s2, size_t n)
{
    char *dest;
    char *src;
    size_t i;

    dest = (char *)s1;
    src = (char *)s2;
    i = 0;
    if (src < dest)
    {
        while (i < n)
            dest[i] = src[i++];
    } 
    else 
        ft_memcpy(dest, src, n);
    return (dest);
}