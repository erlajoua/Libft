#include <stdio.h>
#include <stdlib.h>

char *ft_strcpyt(char *str, char c)
{
    char *dest;
    int i;

    i = 0;
    while (str[i] && str[i] != c)
        i++;
    dest = (char *)malloc(sizeof(char) * i + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (str[i] && str[i] != c)
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    printf("%s\n", dest);
    return (dest);
}

int ft_count_word(char *str, char c)
{
    int i;

    while (*str)
    {
        while (*str && *str == c)
            str++;
        if (*str && *str != c)
        {
            i++;
            while (*str && *str != c)
                str++;
        }
    }
    return (i);
}

char **ft_split(char const *s, char c)
{
    char *str;
    char **dest;
    int size;
    int i;

    str = (char *)s;
    i = 0;
    size = ft_count_word(str, c);
    dest = (char **)malloc(sizeof(char *) * (size + 1));
    while (*str)
    {
        while (*str && *str == c)
            str++;
        if (*str && *str != c)
        {
            i++;
            dest[i] = ft_strcpyt(str, c);
            while (*str && *str != c)
                str++;
        }
    }
    dest[i] = NULL;
    return (dest);
}

int main(void)
{
    char str[] = "salut,je,suis,erwan";
    char c;
    char **dest;

    c = ',';
    dest = ft_split(str, c);
    return (0);
}