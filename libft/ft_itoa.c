#include "libft.h"

static size_t getlen(size_t n)
{
    size_t i;

    i = 0;
    while (n >= 10)
    {
        n = n / 10;
        i++;
    }
    return (i + 1);
}

char *ft_itoa(int n)
{
    size_t len;
    size_t num;
    size_t i;
    char *res;

    num = (n < 0 ? -n : n);
    len = getlen(n);
    i = 0;
    if (!(res = (char *)malloc(sizeof(char) * len + 1 + (n < 0 ? 1 :0))))
        return (0);
    if (n < 0)
    {
        res[0] = '-';
        len = len + 1;
    }
    i = len - 1;
    while (num >= 10)
    {
        res[i] = num % 10 + '0';
        num = num / 10;
        i--;
    }
    res[i] = num % 10 + '0';
    res[len] = 0;
    return (res);
}