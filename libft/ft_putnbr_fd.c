#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    size_t num;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = n * (-1);
    }
    num = (size_t)n;
    if (n >= 10)
        ft_putnbr_fd(num / 10, fd);
    ft_putchar_fd(num % 10 + '0', fd);
}