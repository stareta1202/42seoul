#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp;
    size_t count;

    if (len == 0)
    {
        return b;
    }
    count = 0;
    temp = (unsigned char *)b;
    while(count < len)
    {
        *temp = (unsigned char)c;
        temp++;
        count++;
    }
    return b;
}