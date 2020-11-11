#include "libft.h"

static int isspace(int c)
{
    if (c == '\t' || c == '\n'
     || c == '\v' || c == '\f' 
     || c == '\r' || c == ' ')
        return (1);
    return (0);
}


int ft_atoi(const char *str)
{
    char *word;
    int i;
    int sign;
    int res;

    res = 0;
    word = (char *)str;
    while (isspace(*word))
        word++;
    sign = (*word == '-') ? -1 : 1;
    if (*word == '+' || *word == '-')
        word++;
    while (*word > '0' && *word <= '9')
    {
        res = res * 10 + (*word - 48);
        word++;
    }
    return (res * sign);
}