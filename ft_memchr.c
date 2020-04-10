#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char i;

    if (!str)
        return (NULL);
    str = (unsigned char*)s;
    i = (unsigned char)c;
    while (n > 0)
    {
        if (*str == i)
            return (str);
        else
            str++;
        n--;
    }
    return (NULL);
}

int main(void)
{
    char str[]="bonjouratousjesuiserwan";
    printf("%s\n",str);
    printf("%s\n",memchr(str,'j',24));
    printf("%s\n",str);
    printf("%s\n",ft_memchr(str,'j',24));
    return (0);
}