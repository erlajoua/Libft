#include <stdio.h>
#include <string.h>

char    *ft_strchr(char *s, int c)
{
    while(s && *s != c)
        s++;
    return (s);
}

int main(void)
{
    char *str="018234856789";
    char c = 'a';
    printf("%s\n",strchr(str,'8'));
    printf("%s\n",ft_strchr(str,'8'));
    return (0);
}