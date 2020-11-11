#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (!s1)
        return (0);
    if(*s2 == 0)
        return ((char *) s1);
    i = ft_strlen(s2);
    while (*s1 && n >= i)
    {
        if (*s1 == *s2 )
            return ((char *)s1);
        s1++;
        n--;
    }
    return (0);
}