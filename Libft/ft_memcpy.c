#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void * restrict dst, const void * restrict src, size_t len)
{
    int i;
    unsigned char *dest; //123456789
    const unsigned char *source; //source

    i = 0;
    dest = (unsigned char*)dst;
    source = (unsigned char*)src;
    while(len > 0)
    {
        dest[i] = source[i];
        i++;
        len--;
    }
    return(dest);
}

int main(void)
{
    char src[]="123456789";
    char dst[]="aaaaaaaaaaaaaaaaaaaa";
    printf("Mine : %s\n",ft_memcpy(dst,src,4));
    //printf("Yours : %s\n",memcpy(dst,src,4));
    return (0);
}