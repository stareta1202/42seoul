#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *node;
    t_list *curr;
    t_list *temp;

    if (lst == 0 || f == 0)
        return (NULL);
    if((node = ft_lstnew(f(lst->content))) == 0)
        return (NULL);
    curr = node;
    lst = lst->next;
    while(lst)
    {
        if ((temp = ft_lstnew(f(lst->content))) == 0)
        {
            ft_lstclear(&node, del);
            return (NULL);
        }
        curr->next = temp;
        curr = temp;
        lst = lst->next;
    }
    return (node);
}
