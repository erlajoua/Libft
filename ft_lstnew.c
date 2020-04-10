#include <stdlib.h>
#include <stdio.h>
#

typedef struct      s_list
{
    void            *content;
    struct          s_list *next;
}                   t_list;

t_list *ft_lstnew(void *content)
{
    t_list *list;
    list = malloc(sizeof(t_list));
    if (!list)
        return (NULL);
    list->content = content;
    list->next = NULL;

    return (list);

}

int main(void)
{
}