#include "libft.h"
#include <stdlib.h>

size_t getnumwords(const char *s, char c)
{
    size_t i;
    size_t num;

    i = 0;
    num = 0;
    while (s[i])
    {
        if (s[i] == c)
            num++;
        i++;
    }
    return (num);
}

static void **ft_free(char const **s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        free((void *)s[i]);
        i++;
    }
    free (s);
    return (0);
}

static void ft_strcpy(char *dst, char const *src, size_t start, size_t last)
{
    size_t i;
    
    i = 0;
    while (start < last)
    {
        dst[i] = src[start];
        i++;
        start++;
    }
    dst[i] = 0;
}


static void ft_cutwords(char const *s, char c, char **str)
{
    size_t i;
    size_t j;
    size_t count;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count = i;
            while (s[i] != c)
                i++;
            if (((str[j]) = (char *)malloc (sizeof(char) * (i - count + 1))) == 0)
            {
                ft_free(str, j);
                return (0);
            }
            ft_strcpy(str[j], s, count, i);
            j++;
        }
        else
            i++;
    }
}

char **ft_split(char const *s, char c)
{
    char **str;
    size_t count;

    count = getnumwords(s, c);
    str = (char **)malloc(sizeof(char *) * (count + 1));
    if ((s == 0) || (str == 0))
        return (0);
    str[count] = 0;
    if (count == 0)
        return (str);
    ft_cutwords(s, c, str);
    return (str);
}