#include <stdio.h>

int     is_alpha(int c)
{
    if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int main(void)
{
    char c;

    c = 'Z';
    printf("%d",is_alpha(c));
    return (0);
}