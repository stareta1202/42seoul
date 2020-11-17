#include <string.h>

void *ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
    char *dest;
    char *src;
    size_t i;

    dest = (char *)s1;
    src = (char *)s2;
    i = 0;
    if (n == 0 || s1 == s2)
        retrun (s1);
    while (i < n)
    {
        dest[i] = src[i];
        if (dest[i] == c)
            return (dest + i + 1);
        i++;
    }
    return (NULL);
}