#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int len;
    size_t i;
    size_t j;

    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(sizeof(*str) * (len + 1));
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while(s1[i] != 0)
        str[i++] = s1[i++];
    while(s2[j] != 0)
        str[i + j++] = s2[j++];
    str[i + j] = 0;
    return (str);
}
