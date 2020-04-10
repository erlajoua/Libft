#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memset (void *b, int c, size_t len)
{
    unsigned char *str;
    int i=0;

    str = (unsigned char*)b;
    while (len > 0)
    {
        str[i] = (unsigned char)c;
        i++; 
        len--;
    }
    return (b);
}

int main(void)
{
    char str[]="salut";
    char ft_str[]="salut";

    puts("test");
    puts(str);
    puts(ft_str);
    memset(str,'x',2);
    ft_memset(ft_str,'x',2);
    puts(str);
    puts(ft_str);
}