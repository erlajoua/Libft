#include <stdio.h>

/*
#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.
*/

typedef struct      s_list
{
    void            *content;
    struct          s_list *next;
}                   t_list;

void ft_lstadd_front(t_list **alst, t_list *new)
{
    if (alst && new)
    {
        new->next = *alst;
        *alst = new;
    }
}

int main (void)
{
    return (0);
}