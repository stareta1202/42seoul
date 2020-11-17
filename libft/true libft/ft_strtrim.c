#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t end;
    char *word;

    if(!s1 || !set)
        return (0);
    i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    end = ft_strlen(s1 + i);
    if (end)
        while (s1[end + i - 1] != 0 && ft_strchr(set, s1[end + i - 1]) != 0)
            end--;
    if(!(word = malloc(sizeof(char) * end + 1)))
        return (0);
    ft_strncpy(word, s1 + i, end);
    word[end] = 0;
    return (word);
}