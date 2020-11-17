#include <string.h>

void    *ft_memcpy(void *s1, const void *s2, size_t n)
{
    char    *dest;
    char    *src;
    size_t     count;

    if (n ==0 || s1 == s2)
        return (s1);
    dest = (char *)s1;
    src = (char *)s2;
    count = 0;
    while (count < n)
    {
        *dest++ = *src++;
        count++;
    }
    *dest = *src;
    return (dest);
}