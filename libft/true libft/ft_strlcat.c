#include "libft.h"

size_t ft_strlcat(char *s1, const char *s2, size_t n)
{
    char *dst;
    const char *src;
    size_t i;
    size_t len;

    dst = s1;
    src = s2;
    i = n;
    while (i-- != 0 && *dst)
        dst++;
    len = dst - s1;
    i = n - len;
    if (i == 0)
        return (len + ft_strlen(src));
    while (*src)
    {
        if (i != 1)
        {
            *dst = *src;
            i--;
        }
        src++;
        dst++;
    }
    *dst = 0;
    return (len + src - s2);
}