#include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *s1, const void *s2, size_t n);
void *ft_memccpy(void *s1, const void *s2, int c, size_t n);
void *ft_memmove(void *s1, const void *S2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcmp(const void *s1, const void *s2, size_t n);

size_t ft_strlen(const char *s);
size_t ft_strlcpy(const char *s1, const char *s2, size_t n);

#endif 