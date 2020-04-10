#include <stdio.h>
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next != 0)
        lst = lst->next;
    return (lst);
}

int main(void)
{
    return (0);
}