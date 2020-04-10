#include <stdio.h>
#include <string.h>

//a tester

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *source;
    unsigned char *dst;
    unsigned char carac;
    int i;

    i = 0;
    source = (unsigned char*)src;
    dst = (unsigned char*)dest;
    carac = (unsigned char)c;
    while (n > 0)
    {
        if(source[i] == carac)
        {
            dst[i] = source[i];
            return (dst);
        }
        dst[i] = source[i];
        i++;
        n--;
    }
    return (dst);
}

int main(void)
{
    char destination[]="0123456789";
    char soursse[]="salut";
    ft_memccpy(destination,soursse,'x',4);
    puts(destination);
    return (0);
}