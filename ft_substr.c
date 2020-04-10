#include <stdio.h>
#include <stdlib.h>

/*Description, creer une nouvelle chaine et la malloc, de taille len et commençant depuis start*/

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    char *cpy;
    int i;

    i = 0;
    str = (char *)s;
    if (!s)
		return (NULL);
    if ((cpy = (char*)malloc(sizeof(char) * len + 1)) == NULL)
        return (NULL);
    while(str[start] && len > 0)
    {
        cpy[i] = str[start];
        start++;
        i++;
        len--;
    }
    cpy[i] = '\0';
    return (cpy);
}

int main(void)
{
    printf("god : %s",ft_substr("salut",3,5));
    return (0);
}