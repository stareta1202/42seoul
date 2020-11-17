#include "libft.h"

t_list *ft_lstnew(void *content) 
{
    t_list *node;

    node = (t_list *)malloc(sizeof(struct s_list));

    if (node == 0)
        return (0);
    node ->content = content;
    node ->next = 0;
    return (node);
}
