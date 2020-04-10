#include <stdio.h>
#include <string.h>

char    *ft_strrchr(char *s, int c)
{
    while(*s)
        s++;
    s--;
    if (*s == c)
        return (s);
    while(*s != 'c')
    {
        s--;
        if (*s == c)
            return (s);
    }
    return (NULL);
}

int main(void)
{
    char *str="018234856789";
    printf(":%s\n",strrchr(str,'x'));
    printf(":%s",ft_strrchr(str,'x'));
    return (0);
}