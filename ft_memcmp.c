#include <stdio.h>
#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;
    while(str1 && str2 && n > 0)
    {
        if (*str1 - *str2 < 0)
            return (-1);
        else if (*str1 - *str2 > 0)
            return (1);
        str1++;
        str2++;
        n--;
    }
    return (0);
}

int main(void)
{
    char s1[]="balat";
    char s2[]="balbt";
    printf("resultat : %d\n",memcmp(s1,s2,3));
    printf("resultat : %d\n",ft_memcmp(s1,s2,3));
    return (0);
}