#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while (*str != c)
    {
        if(*str == 0)
            return (0);
        str++;
    }
    return (str);
}