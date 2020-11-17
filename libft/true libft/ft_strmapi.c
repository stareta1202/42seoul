#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;
    if (!s || !f)
        return (0);
    if(!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (0);
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}