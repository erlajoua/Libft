#include <stdio.h>
#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    new->next = NULL;
    if (*alst == NULL)
    {
        *alst = new;
        return;
    }
    while ((*alst)->next != NULL)
        *alst = (*alst)->next;
    (*alst)->next = new;
}

int main(void)
{
    return (0);
}