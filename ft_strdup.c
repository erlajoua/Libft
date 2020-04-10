#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char       *ft_strdup(const char *s)
{
    char *dest;
    int i;

    i = 0;
    while (s[i])
        i++;
    dest = (char *)malloc(sizeof(char) * i + 1);
    i = 0;
    while(s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    return (0);
}