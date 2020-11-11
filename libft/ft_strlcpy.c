#include <string.h>
#include "libft.h"

size_t ft_strlcpy(char *dst,const char *src, size_t n)
{
    size_t i;

    if(!dst || !src)
        return (0);
    i = 0;
    while (src[i])
        i++;
    if (n > 0)
    {
        while ((i < n) && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = 0;
    }
    while (src[i])
        i++;
    return (i);
}