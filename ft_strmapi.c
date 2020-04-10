#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *dest;
    char *str;
    unsigned int i;

    i = 0;
    str = (char *)s;
    dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
    if (!dest)
        return (NULL);
    while (str[i])
    {
        dest[i] = f(i,str[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    ft_nextchar(unsigned int n, char c)
{
    char dest;

    dest = c + n;
    return (dest);
}

int main(void)
{
    char str[] = "abcde";
    char (*f)(unsigned int,char);
    f = ft_nextchar;

    printf("%c\n",ft_nextchar(1,'h'));
    printf("%s",ft_strmapi(str,(*f)(1,'x')));
    return (0);
}