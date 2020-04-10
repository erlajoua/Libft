#include <stdio.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if (!lst)
        return (NULL);
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

int main(void)
{
    return (0);
}