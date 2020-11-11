#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *word;

    if (!(word = malloc(size * count)))
        return (NULL);
    ft_memset(word, 0, count * size);
    return (word);
}