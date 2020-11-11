#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    if(!s)
        return(NULL);
    i = 0;
    while(s[i])
        i++;
    return (i);
}