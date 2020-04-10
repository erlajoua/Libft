#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(void)
{
    char *s="idjzqijdqzoijdqziojdqizjo";
    printf("%d",ft_strlen(s));
    return (0);
}