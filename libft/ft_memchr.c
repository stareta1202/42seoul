#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;

    str = s;
    i = 0;
    while (i < n)
    {
        if (*str == (unsigned char)c)
            return (str);
        str++;
        i++;
    }
    return (NULL);
}