#include "libft.h"

char *ft_strdup(const char *src)
{
    char *word;
    int i;
    int size;

    i = 0;
    size = 0;

    while (src[i])
        i++;
    if(!(word = malloc(sizeof(char) * (size + 1))))
        return (NULL);
    while (src[i])
    {
        word[i] = src[i];
        i++;
    }
    word[i] = 0;
    return (word);
}