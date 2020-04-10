#include <stdio.h>

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return (c);   
}

int main(void)
{
    printf("%d",ft_tolower('c'));
    return (0);
}